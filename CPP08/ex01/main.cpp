#include "Span.hpp"

int	main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan();
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(34);
		spShort.addNumber(4);
	}
	catch(const std::exception& e){std::cerr << e.what();}
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(4);
		spShort.shortestSpan();
	}
	catch(const std::exception& e){std::cerr << e.what();}
	try
	{
		Span spShort = Span(1);
		spShort.addNumber(3);
		spShort.longestSpan();
	}
	catch(const std::exception& e){std::cerr << e.what();}


	std::vector<int> SpanVect;
	std::srand(time(0));
	for (int i = 0; i < 10000; i++)
		SpanVect.push_back(std::rand() % 25782);
	try
	{
		Span spSpanVect(10000);
		spSpanVect.addNumber(SpanVect.begin(), SpanVect.end());
		std::cout << spSpanVect.shortestSpan() << std::endl;
		std::cout << spSpanVect.longestSpan();
	}
	catch(const std::exception& e){std::cerr << e.what();}
	std::vector<int> mySpan;
	mySpan.push_back(100);
	mySpan.push_back(102);
	mySpan.push_back(1);
	mySpan.push_back(99);
	mySpan.push_back(35);
	mySpan.push_back(37);
	mySpan.push_back(47);
	try
	{
		Span spMySpan(7);
		spMySpan.addNumber(mySpan.begin(), mySpan.end());
		std::cout << " Integers in Span: ";
		for (int i = 0; i < 7; i++)
			std::cout << spMySpan[i] << " ";
		std::cout << std::endl;
		std::cout << spMySpan.shortestSpan() << std::endl;
		std::cout << spMySpan.longestSpan();
		spMySpan.addNumber(mySpan.begin(), mySpan.end());
	}
	catch(const std::exception& e){std::cerr << e.what();}
	return 0;
}
