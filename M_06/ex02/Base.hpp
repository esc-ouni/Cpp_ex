#ifndef __BASE_
#define __BASE_

#include <iostream>
#include <sstream>
#include <iomanip>
#include <limits.h>

class Base{
    public:
        virtual ~Base();
};

Base *generate(void);
void identify(Base* p);
void identify(Base& p);

#endif