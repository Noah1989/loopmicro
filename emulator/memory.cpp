#include "memory.hpp"

Memory::Memory(Bus *addr, Bus *data, Signal *nMreq, Signal *nRd, Signal *nWr,
               Bus *wrEn, unsigned int memorySize, unsigned int blockBits)
: Actor(NULL, 0), addr(addr), data(data), nMreq(nMreq), nRd(nRd), nWr(nWr),
  wrEn(wrEn), memory(memorySize), blockBits(blockBits)
{
}

void Memory::tick()
{
    unsigned int address = addr->get_value();
    if (nMreq->get_state() == SignalState::High || address >= memory.size()) {
        data->release(this);
    } else if (nWr->get_state() == SignalState::Low) {
        data->release(this);
        if (wrEn->get_value() & (1 << (address>>blockBits))) {
            memory[address] = data->get_value();
        }
    } else if (nRd->get_state() == SignalState::Low) {
        data->drive(this, memory[address]);
    } else {
        data->release(this);
    }
}
