# See /doc/hw/z80/rc2014.txt for details
TARGET = os.bin
BASE = ../../..
CDIR = $(BASE)/cvm
EDIR = $(BASE)/emul/z80
STAGE = $(CDIR)/stage
EMUL = $(EDIR)/rc2014
XCOMP = xcomp.fs
BLKFS = $(CDIR)/blkfs
EMUL_ARGS = 
# for SIO, XCOMP=xcompsio.fs and EMUL_ARGS=-s

.PHONY: all
all: $(TARGET) 
$(TARGET): $(XCOMP) $(STAGE) $(BLKFS)
	$(STAGE) < $(XCOMP) > $@

$(STAGE):
	$(MAKE) -C $(CDIR) stage

$(EMUL):
	$(MAKE) -C $(EDIR) rc2014

$(BLKFS): $(BASE)/blk.fs
	$(MAKE) -C $(CDIR) blkfs

%.hex: %.bin
	objcopy  --input-target=binary --output-target=ihex $< $@

.PHONY: program
program: os.hex
	python3 -u loader.py os.hex

.PHONY: emul
emul: $(EMUL) $(TARGET)
	$(EMUL) $(EMUL_ARGS) $(TARGET)

.PHONY: clean
clean:
	rm -f $(TARGET)
