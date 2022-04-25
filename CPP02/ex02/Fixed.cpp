#include "Fixed.hpp"

Fixed::Fixed( void )
{
	this->fixed_point_number = 0;
	return;
}

Fixed::~Fixed()
{
	return;
}

void Fixed::setRawBits( int const raw )
{
	this->fixed_point_number = raw;
}

int Fixed::getRawBits( void ) const
{
	return this->fixed_point_number;
}

Fixed:: Fixed(Fixed const &other)
{;
	*this = other;
}

Fixed &	Fixed::operator=( Fixed const & other )
{
	if (this != &other)
		this->fixed_point_number = other.getRawBits();
	return *this;
}

float	Fixed::toFloat( void ) const
{
	float	floats;
	floats = (float) this->fixed_point_number / (1 << this->bits);

	return floats;
}

int		Fixed::toInt( void ) const
{
	int	ints;
	ints = this->fixed_point_number / (1 << this->bits);
	return ints;
}

Fixed::Fixed( int const n )
{
	this->fixed_point_number = n * (1 << this->bits);
	return;
}

Fixed::Fixed( float const m )
{
	this->fixed_point_number = (int) roundf( m * (1 << this->bits));
	return;
}

Fixed &	Fixed::min( Fixed & another, Fixed & other)
{
	return (another < other ? another : other);
}

Fixed const &	Fixed::min( Fixed const & another, Fixed const & other)
{
	return (another < other ? another : other);
}

Fixed &	Fixed::max( Fixed & another, Fixed & other)
{
	return (another < other ? other : another);
}

Fixed const &	Fixed::max( Fixed const & another, Fixed const & other)
{
	return (another < other ? other : another);
}

std::ostream &	operator<<(std::ostream & o, Fixed const & i )
{
	o << i.toFloat();

	return o;
}

bool	Fixed::operator>(Fixed const & other ) const
{
	return (this->fixed_point_number > other.getRawBits() ? this->fixed_point_number : other.getRawBits());
}

bool	Fixed::operator<(Fixed const & other ) const
{
	return (this->fixed_point_number < other.getRawBits() ? this->fixed_point_number : other.getRawBits());
}

bool	Fixed::operator>=(Fixed const & other ) const
{
	return (this->fixed_point_number >= other.getRawBits() ? this->fixed_point_number : other.getRawBits());
}

bool	Fixed::operator<=(Fixed const & other ) const
{
	return (this->fixed_point_number <= other.getRawBits() ? this->fixed_point_number : other.getRawBits());
}

bool	Fixed::operator==(Fixed const & other ) const
{
	if (this->fixed_point_number == other.getRawBits())
		return true;
	return false;
}

bool	Fixed::operator!=(Fixed const & other ) const
{
	if (this->fixed_point_number != other.getRawBits())
		return true;
	return false;
}

Fixed	Fixed::operator+( Fixed const & other )
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-( Fixed const & other )
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*( Fixed const & other )
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/( Fixed const & other )
{
	return Fixed(this->toFloat() / other.toFloat());
}

const Fixed &	Fixed::operator++( void )
{
	this->fixed_point_number++;

	return *this;
}

Fixed	Fixed::operator++( int )
{
	Fixed	it(*this);
	this->fixed_point_number++;
	return it;
}

const Fixed &	Fixed::operator--( void )
{
	this->fixed_point_number--;
	return *this;
}

Fixed	Fixed::operator--( int )
{
	Fixed	it(*this);
	this->fixed_point_number--;
	return it;
}