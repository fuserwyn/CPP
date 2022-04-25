#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>
struct Data
{
	int 		i;
	char		ch;
	std::string	str;
};
uintptr_t	serialize(Data*	ptr);
Data*		deserialize(uintptr_t raw);
void 		initStruct(Data *data);
#endif