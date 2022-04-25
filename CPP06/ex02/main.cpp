#include "Base.hpp"

int	main()
{
	Base* pointer;

	pointer = generate();
	identify(pointer);
	identify(*pointer);

	delete pointer;
	return 0;
}