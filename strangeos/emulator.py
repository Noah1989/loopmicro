#!/usr/bin/env python3

import os, re
from readchar import readchar
from z80 import Z80Machine

def _get_u16(image):
    return image[0] + image[1]*0x100

class LoopMicro(Z80Machine):
    def __init__(self):
        super().__init__()
        self.set_breakpoint(0x08)
        self.set_breakpoint(0x10)
        self.ticks_to_stop = 1024

    def stdout(self):
        ix = _get_u16(self._Z80State__ix)
        c = self.memory[ix-4]
        print(bytes([c]).decode(), end='', flush=True)

    def stdin(self):
        ix = _get_u16(self._Z80State__ix)
        c = readchar()
        c = c.replace('\r', '\n')
        c = c.replace('\x7f', '\x08')
        c = c.encode()[0]
        if c == 3:
            raise KeyboardInterrupt()
        self.memory[ix] = c
        self.memory[ix+1] = 0
        self.memory[ix+2] = 0
        self.memory[ix+3] = 0

    def run(self):
        while True:
            events = super().run()
            if events & self._BREAKPOINT_HIT:
                if self.pc == 0x08:
                    self.stdout()
                elif self.pc == 0x10:
                    self.stdin()
                else:
                    break
            if self._Z80State__halted[0]:
                break


def load(m, file):
    print("loading", file, '...')
    next_address = int(file[:4], 16)
    with open(file, 'r') as f:
        for line in f:
            if line == '...\n':
                next_address = None

            if not line.startswith('@'): 
                continue

            address = int(line[1:5], 16)
            if (next_address is not None and address != next_address):
                print("unexpected address", hex(address)) 
            next_address = address + 4

            data = [line[7:9], line[10:12], line[13:15], line[16:18]]
            data = [int(byte, 16) if byte.strip() else 0 for byte in data]
            data = bytes(data)
            m.set_memory_block(address, data)


def main():
    m = LoopMicro()

    files = [f for f in os.listdir('.') if re.match(r'[0-9a-fA-F]{4}.*.txt', f)]
    files.sort()
    for file in files:
        load(m, file)

    print('---------- RESET ----------')

    m.pc = 0
    m.run()

    print('---------- HALT! ----------')
    print("halted @", hex(m.pc))

if __name__ == "__main__":
    main()

