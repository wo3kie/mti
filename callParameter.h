#ifndef _PARAMETRY_WYWOLANIA_H_
#define _PARAMETRY_WYWOLANIA_H_

#include "value.h"

#include <vector>

struct Parametry{
    int argc;
    std::vector< Wartosc*> argv;
};

#endif