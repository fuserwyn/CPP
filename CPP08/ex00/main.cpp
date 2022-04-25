#include "easyfind.hpp"

int	main()
{
	std::list<int>	lst;
	int	n;
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	lst.push_back(5);
	for_each(lst.begin(), lst.end(), display);
	try
	{
		n = finder(lst, 2);
		std::cout << "Found " << n << "!" << std::endl;
	}
	catch(char const * err){std::cerr << err;}
	for_each(lst.begin(), lst.end(), display);
	try
	{
		n = finder(lst, 100);
		std::cout << "Found " << n << "!"<< std::endl;;
	}
	catch(char const * err){std::cerr << err;}
	std::vector<int>	vec;
	vec.push_back(12);
	vec.push_back(13);
	vec.push_back(14);
	vec.push_back(15);
	vec.push_back(16);
	vec.push_back(17);
	vec.push_back(18);
	for_each(vec.begin(), vec.end(), display);
	try
	{
		n = finder(vec, 15);
		std::cout << "Found " << n << "!"<< std::endl;;
	}
	catch(char const * err){std::cerr << err << std::endl;}
	for_each(vec.begin(), vec.end(), display);
	try
	{
		n = finder(vec, 100);
		std::cout << "Found " << n << "!"  << std::endl;
	}
	catch(char const * err){std::cerr << err << std::endl;}
	return 0;
}
