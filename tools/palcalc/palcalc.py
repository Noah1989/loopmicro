#!/bin/env python3

import sys, math

from PyQt5.QtWidgets import QApplication, QDialog, QColorDialog
from PyQt5.QtGui import QPalette, QColor
from PyQt5.uic import loadUi

from colormath.color_objects import sRGBColor, LabColor
from colormath.color_conversions import convert_color
from colormath.color_diff import delta_e_cie2000

class MainDialog(QDialog):
    def __init__(self, parent=None):
        super().__init__(parent)
        loadUi('palcalc.ui', self)

        self.pushButton_pick.clicked.connect(self.pick)
        self.pushButton_pick.setFocus()

        self.spinBox_r8.valueChanged.connect(self.rgb24_changed)
        self.spinBox_g8.valueChanged.connect(self.rgb24_changed)
        self.spinBox_b8.valueChanged.connect(self.rgb24_changed)

        self.spinBox_r2.valueChanged.connect(self.rgbi8_changed)
        self.spinBox_g2.valueChanged.connect(self.rgbi8_changed)
        self.spinBox_b2.valueChanged.connect(self.rgbi8_changed)
        self.spinBox_i2.valueChanged.connect(self.rgbi8_changed)

        self.pushButton_approximate.clicked.connect(self.approximate)

    def pick(self):
        color = QColorDialog.getColor()
        self.spinBox_r8.setValue(color.red())
        self.spinBox_g8.setValue(color.green())
        self.spinBox_b8.setValue(color.blue())

    def rgb24_input(self):
        return QColor(self.spinBox_r8.value(),
                      self.spinBox_g8.value(),
                      self.spinBox_b8.value())


    def rgbi8_input(self):
        return color_from_rgbi8(self.spinBox_r2.value(),
                                self.spinBox_g2.value(),
                                self.spinBox_b2.value(),
                                self.spinBox_i2.value())

    def rgb24_changed(self):
        color = self.rgb24_input()
        setWidgetColor(self.frame_rgb24, color)
        self.recalc_hsv()

    def rgbi8_changed(self):
        color = self.rgbi8_input()
        setWidgetColor(self.frame_rgbi8, color)
        byte = (self.spinBox_r2.value()*0x40 +
                self.spinBox_g2.value()*0x10 +
                self.spinBox_b2.value()*0x04 +
                self.spinBox_i2.value()*0x01)
        self.label_hex.setText(f'${byte:02X}')
        if color.red()*0.3+color.green()*0.6+color.blue()*0.1 > 150:
            textColor = QColor(0, 0, 0)
        else:
            textColor = QColor(255, 255, 255)
        setWidgetColor(self.label_hex, textColor, QPalette.WindowText)
        self.recalc_hsv()

    def recalc_hsv(self):
        color_rgb24 = self.rgb24_input()
        color_rgbi8 = self.rgbi8_input()
        self.doubleSpinBox_h.setValue(360*color_rgb24.hueF())
        self.doubleSpinBox_s.setValue(100*color_rgb24.saturationF())
        self.doubleSpinBox_l.setValue(100*color_rgb24.lightnessF())
        dh = 360*color_rgbi8.hueF() - 360*color_rgb24.hueF()
        if dh > 180:
            dh -= 360
        elif dh < -180:
            dh += 360
        self.doubleSpinBox_dh.setValue(dh)
        self.doubleSpinBox_ds.setValue(100*color_rgbi8.saturationF() -
                                       100*color_rgb24.saturationF())
        self.doubleSpinBox_dl.setValue(100*color_rgbi8.lightnessF() -
                                       100*color_rgb24.lightnessF())

    def approximate(self):
        target = self.rgb24_input()
        target_srgb = sRGBColor(target.redF(),
                                target.greenF(),
                                target.blueF())
        target_lab = convert_color(target_srgb, LabColor)

        best_rgbi8 = None
        best_distance = math.inf
        for r2 in range(4):
         for g2 in range(4):
          for b2 in range(4):
           for i2 in range(4):
            approx = color_from_rgbi8(r2, g2, b2, i2)
            approx_srgb = sRGBColor(approx.redF(),
                                    approx.greenF(),
                                    approx.blueF())
            approx_lab = convert_color(approx_srgb, LabColor)
            distance = delta_e_cie2000(target_lab, approx_lab)
            if distance < best_distance:
                best_rgbi8 = (r2, g2, b2, i2)
                best_distance = distance

        self.spinBox_r2.setValue(best_rgbi8[0])
        self.spinBox_g2.setValue(best_rgbi8[1])
        self.spinBox_b2.setValue(best_rgbi8[2])
        self.spinBox_i2.setValue(best_rgbi8[3])


def color_from_rgbi8(r2, g2, b2, i2):
    rh = r2 // 2
    rl = r2 % 2
    gh = g2 // 2
    gl = g2 % 2
    bh = b2 // 2
    bl = b2 % 2
    ih = i2 // 2
    il = i2 % 2
    r4 = rh*8 + ih*4 + rl*2 + il
    g4 = gh*8 + ih*4 + gl*2 + il
    b4 = bh*8 + ih*4 + bl*2 + il
    return QColor(r4*0x11, g4*0x11, b4*0x11)



def setWidgetColor(widget, color, role=QPalette.Window):
    palette = widget.palette()
    palette.setColor(role, color)
    widget.setPalette(palette)

if __name__ == '__main__':
    app = QApplication(sys.argv)
    win = MainDialog()
    win.setSizeGripEnabled(False)
    win.setFixedSize(win.size())
    win.show()
    sys.exit(app.exec())
