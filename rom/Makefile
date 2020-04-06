all: rom.inc rom.hex

rom.inc: rom.lst
	./extract_symbols.sh rom

rom.hex rom.lst: *.asm
	asm80 -m Z80 -t hex rom.asm

.PHONY: clean all
clean:
	rm -vf *.bin *.hex *.lst rom.inc