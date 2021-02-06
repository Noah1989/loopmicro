sources = \
	rom.asm debug_io.asm error.asm convert.asm \
	video_timing.asm video_text_mode.asm video_vsync.asm \
	font_terminus.asm \
	keyboard.asm \
	sdcard.asm stream.asm fat32.asm fat32_directory.asm \
	ui_box.asm ui_window.asm ui_widget.asm ui_panel.asm ui_label.asm \
	ui_hotkey_highlight.asm ui_listview.asm listing.asm \
	taskbar.asm app.asm app_help.asm app_memory.asm app_files.asm \
	editor.asm \
	lorem_ipsum.asm

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
