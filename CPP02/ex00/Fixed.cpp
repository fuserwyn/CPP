#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->fixed_point_number = 0;
	std:: cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std:: cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point_number = raw;
}

int Fixed::getRawBits( void ) const
{
	std:: cout << "getRawBits member function called" << std::endl;
	return this->fixed_point_number;
}

Fixed:: Fixed(Fixed const &other)
{
	std:: cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &	Fixed::operator=( Fixed const & other )
{
	std:: cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->fixed_point_number = other.getRawBits();
	return *this;
}
