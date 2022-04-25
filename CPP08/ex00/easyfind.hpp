#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <list>
# include <algorithm>
# include <vector>
# include <iomanip>
template< typename T >
int finder(T & data, int width)
{
	typename T::iterator	it;

	it = std::find(data.begin(), data.end(), width);
	if (it == data.end())
		throw  "Not Found\n";
	return *it;
}
void	display(int i){std::cout << i << " ";}
#endif
