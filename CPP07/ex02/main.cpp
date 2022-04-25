#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    try
    {
        Array<int> Bicycle_day(7);

		for (int i = 0; i < Bicycle_day.size(); i++)
		{
			Bicycle_day[i] = 420;
			std::cout << Bicycle_day.getArray(i) << std::endl;
		}
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
		Array<int> Bicycle_day(7);
        // Bicycle_day[MAX_VAL] = 0;
		Bicycle_day[-1] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}
