#ifndef __SERIALIZER_
#define __SERIALIZER_

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits.h>
#include "Data.h"

class Serializer{
    public:
        Serializer();
        Serializer(Serializer const &r_inst);
        Serializer &operator=(Serializer const &r_inst);
        virtual ~Serializer() = 0;

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};


#endif