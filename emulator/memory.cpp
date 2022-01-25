#include "memory.hpp"

#include <fcntl.h>
#include <sys/mman.h>

Memory::Memory(Bus *addr, Bus *data, Signal *nMreq, Signal *nRd, Signal *nWr,
               Bus *wrEn, unsigned int memorySize, unsigned int blockBits)
: Actor(NULL, 0), memorySize(memorySize), addr(addr), data(data),
  nMreq(nMreq), nRd(nRd), nWr(nWr), wrEn(wrEn), blockBits(blockBits)
{
    int file = open("/persistent_data/memory.bin", O_CREAT | O_RDWR,
                    S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP);
    posix_fallocate(file, 0, memorySize);
    buffer = reinterpret_cast<char*>(mmap(NULL, memorySize, PROT_WRITE,
                                          MAP_SHARED, file, 0));
}

void Memory::tick()
{
    unsigned int address = addr->get_value();
    if (nMreq->get_state() == SignalState::High || address >= memorySize) {
        data->release(this);
    } else if (nWr->get_state() == SignalState::Low) {
        data->release(this);
        if (wrEn->get_value() & (1 << (address>>blockBits))) {
            buffer[address] = data->get_value();
        }
    } else if (nRd->get_state() == SignalState::Low) {
        data->drive(this, buffer[address]);
    } else {
        data->release(this);
    }
}
