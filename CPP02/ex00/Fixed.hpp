#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
class Fixed
{
private:
	int					fixed_point_number;
	static const int	bits=8;
public:
	Fixed( void );
	Fixed( Fixed const & other );
	~Fixed( void );
	Fixed &	operator=( Fixed const & other );
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};
#endif