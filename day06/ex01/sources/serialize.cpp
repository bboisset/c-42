#include "../includes/serialize.hpp"

/**
 * @brief Take a structure pointer and convert it to uintptr_t (non sign integer)
 * 
 * @param ptr 
 * @return uintptr_t 
 */
uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

/**
 * @brief Take non sign integer and convert it to a pointer structure
 * 
 * @param raw 
 * @return Data* 
 */
Data		*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}