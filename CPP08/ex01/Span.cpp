#include "Span.hpp"
Span::Span():_N(0){}
Span::Span(unsigned int n):_N(n){}
Span::Span(Span const & copy)
{
	this->_N = copy._N;
	this->_vec = copy._vec;
	return;
}
Span::~Span(){}
Span & Span::operator=(Span const & other)
{
	this->_N = other._N;
	this->_vec = other._vec;
	return *this;
}
int & Span::operator[](unsigned int idx)
{
	if (idx >= this->_N)
		throw IndexOutOfBoundsException();
	return this->_vec[idx];
}
void	Span::addNumber(int nb)
{
	if (this->_vec.size() == this->_N)
		throw ImpossibleToAddException();
	else
		this->_vec.push_back(nb);
}
int		Span::shortestSpan()
{
	int	res;
	if (this->_vec.size() < 2)
		throw NoDistanceException();
	else
	{
		std::vector<int>::iterator	it = this->_vec.begin();
		std::vector<int>::iterator	ite = this->_vec.end();
		res = this->longestSpan();
		for (*it; *it != *(ite - 1); *it++)
		{
			if (abs(*it - *(it + 1)) < res)
				res = abs(*it - *(it + 1));
		}
	}
	return res;
}
int		Span::longestSpan()
{
	std::vector<int>::iterator min_nb;
	std::vector<int>::iterator max_nb;
	if (this->_vec.size() < 2)
		throw NoDistanceException();
	else
	{
		min_nb = std::min_element(this->_vec.begin(), this->_vec.end());
		max_nb = std::max_element(this->_vec.begin(), this->_vec.end());
	}
	return *max_nb - *min_nb;
}
const char* Span::ImpossibleToAddException::what() const throw(){return " Immpossible to add number!\n";}
const char* Span::NoDistanceException::what() const throw(){return " Immpossible to find distance!\n";}
const char* Span::IndexOutOfBoundsException::what() const throw(){return " Index is out of bounds!\n";}
