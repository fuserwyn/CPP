#ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

# include <iostream>
# include <string>

class harlFilter
{
private:

	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
	void	message( void );
	void	(harlFilter::*array[5])( void );

public:
	harlFilter();
	~harlFilter();

	void	complain( std::string level );
};

#endif