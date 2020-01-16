rom.inc: rom.lst
	./extract_symbols.sh rom

rom.bin, rom.lst: *.asm
	asm80 -m Z80 -t bin rom.asm

.PHONY: clean
clean:
	rm -vf *.bin *.lst rom.inc