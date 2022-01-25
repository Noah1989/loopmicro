#ifndef MEMORY_HPP
#define MEMORY_HPP

#include <vector>

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"

class Memory : public Actor
{
    public:
        Memory(Bus *addr, Bus *data, Signal *nMreq, Signal *nRd, Signal *nWr,
               Bus *wrEn, unsigned int memorySize, unsigned int blockBits);

        void          tick();
        unsigned int  memorySize;
        char         *buffer;

    private:
        Bus              *addr;
        Bus              *data;
        Signal           *nMreq;
        Signal           *nRd;
        Signal           *nWr;
        Bus              *wrEn;
        unsigned int      blockBits;
};

#endif // MEMORY_HPP
