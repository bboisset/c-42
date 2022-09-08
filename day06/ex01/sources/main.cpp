#include "../includes/serialize.hpp"

/**
 * @brief This test is checking the fact that Data could be serialized and deserialized
 * with the same content, and the same address at the end.
 */
void	test_serialize()
{
	Data	*data = new Data;
	std::cout << "Data address: " << data << std::endl;
	data->name = "Jean";
	data->age = 42;
	uintptr_t	serialized = serialize(data);
	Data		*deserialized = deserialize(serialized);
	std::cout << "name: " << deserialized->name << std::endl;
	std::cout << "age: " << deserialized->age << std::endl;
	std::cout << "deserialized address: " << deserialized << std::endl;
}

int main(void){
	test_serialize();
	return (0);
}