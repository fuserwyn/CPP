#include "MutantStack.hpp"

int	main()
{
	MutantStack<int>	mstack;
	mstack.push(0);
	mstack.push(1);
	std::cout << "Top of stack: " << mstack.top() << std::endl;
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	mstack.pop();
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	std::cout << "Top of stack: " << mstack.top() << std::endl;
	mstack.push(2);
	mstack.push(3);
	mstack.push(4);
	mstack.push(5);
	std::cout << "Print stack: " << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> lst;
	std::cout << "List " << std::endl<<std::endl;
	lst.push_back(6);
	lst.push_back(7);
	std::cout << "Top of stack: " << lst.back() << std::endl;
	lst.pop_back();
	std::cout << "Size of stack: " << lst.size() << std::endl;
	lst.push_back(8);
	lst.push_back(9);
	lst.push_back(10);
	lst.push_back(11);
	std::cout << "Print stack: " << std::endl;
	MutantStack<int, std::list<int> >::iterator itl = lst.begin();
	MutantStack<int, std::list<int> >::iterator itel = lst.end();
	++itl;
	--itl;
	while (itl != itel)
	{
		std::cout << *itl << std::endl;
		++itl;
	}
	std::cout << std::endl<< std::endl;
	MutantStack<int>::reverse_iterator it1 = mstack.rbegin();
	MutantStack<int>::reverse_iterator ite1 = mstack.rend();
	++it1;
	--it1;
	while (it1 != ite1)
	{
		std::cout << *it1 << std::endl;
		++it1;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);
	while (!s.empty())
		s.pop();
	std::cout << "Size of stack: " << s.size() << std::endl;
	return 0;
}
