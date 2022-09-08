#ifndef DEF_SERIALIZE_HPP
#define DEF_SERIALIZE_HPP
#include <iostream>

struct Data
{
	std::string name;
	int age;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t raw);

#endif