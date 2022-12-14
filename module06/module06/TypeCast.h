#ifndef TYPECAST_H
#define TYPECAST_H

#include <cstdint>

struct  Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
