#include "Serialization.hpp"

int main()
{
	Data	data;
	Data*	ptr;
	Data*	des_ptr;
	uintptr_t	raw;

	ptr = &data;
	initStruct(&data);
	std::cout << "Structure" << std::endl;
	std::cout << ptr->i << std::endl;
	std::cout << ptr->ch << std::endl;
	std::cout << ptr->str << std::endl << std::endl;
	raw = serialize(ptr);
	des_ptr = deserialize(raw);
	std::cout << "After using serialize and deserialize" << std::endl;
	std::cout << des_ptr->i << std::endl;
	std::cout << des_ptr->ch << std::endl;
	std::cout << des_ptr->str << std::endl << std::endl;

	std::cout << ptr << std::endl;
	std::cout << des_ptr << std::endl;
	return 0;
}
