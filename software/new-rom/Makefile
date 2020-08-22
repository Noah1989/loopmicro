sources = \
	rom.asm debug_io.asm error.asm \
	video_timing.asm video_text_mode.asm \
	font_terminus.asm

.PHONY: clean program

program: rom.hex
	python3 -u loader.py $<

clean:
	rm -vf *.o *.bin *.hex *.err *.lis *.sym *.map

%.o : %.asm *.inc
	z80asm -l $<

rom.bin : $(sources:.asm=.o)
	z80asm --make-bin --map $^

%.hex : %.bin
	objcopy  --input-target=binary --output-target=ihex $< $@

.SECONDARY:
