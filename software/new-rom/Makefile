sources = \
	rom.asm debug_io.asm error.asm \
	video_timing.asm video_text_mode.asm \
	font_terminus.asm \
	keyboard.asm \
	ui_box.asm ui_window.asm ui_widget.asm ui_panel.asm ui_label.asm \
	taskbar.asm

rom.bin: $(sources:.asm=.o)
	z80asm --make-bin --map $^
	cat rom_ram_initialized.bin >> rom.bin
	rm -v rom_ram*.bin


%.o: %.asm *.inc
	z80asm -l $<

%.hex: %.bin
	objcopy  --input-target=binary --output-target=ihex $< $@

.PHONY: clean program

program: rom.hex
	python3 -u loader.py $<

clean:
	rm -vf *.o *.bin *.hex *.err *.lis *.sym *.map

.SECONDARY:
