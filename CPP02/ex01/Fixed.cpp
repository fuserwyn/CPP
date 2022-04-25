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

float	Fixed::toFloat( void ) const
{
	float	float_number;
	float_number = (float) this->fixed_point_number / (1 << this->bits);

	return float_number;
}

int		Fixed::toInt( void ) const
{
	int	int_number;
	int_number = this->fixed_point_number / (1 << this->bits);
	return int_number;
}

Fixed::Fixed( int const n )
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_number = n * (1 << this->bits);
	return;
}

Fixed::Fixed( float const m )
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_number = (int) roundf( m * (1 << this->bits));
	return;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}