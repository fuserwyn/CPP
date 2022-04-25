#include "harlFilter.hpp"

int main(int argc, char **argv)
{
	harlFilter filter;

	if (argc !=2 )
	{
		std::cout << "wrong number"<<std::endl;
		std::cout << "Input one of the for levels: \"DEBUG\", \"INFO\", \"WARNING\" or \"ERROR\". " << std::endl;
		return 1;
	}
	filter.complain(argv[1]);
	return 0;
}
