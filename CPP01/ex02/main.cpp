#include <iostream>

int main()
{
	std::string		str;
	std::string* 	ptr;
	std::string&	ref=str;

	str = "HI THIS IS BRAIN";
	ptr = &str;

	std::cout <<"address of string "<<&str<<std::endl;
	std::cout <<"address of stringPTR "<<ptr<<std::endl;
	std::cout <<"address of stringREF "<<&ref<<std::endl;

	std::cout << "string value " << str << std::endl;
	std::cout << "stringPTR value " << *ptr << std::endl;
	std::cout << "stringREF value " << ref << std::endl;

	return 0;
}