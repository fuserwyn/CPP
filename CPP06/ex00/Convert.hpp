#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <limits>
# include <cmath>
class Convert
{
private:
	double		value;
	std::string str;
public:
	Convert();
	Convert(std::string str);
	Convert(const Convert& other);
	Convert &operator =(const Convert& other);
	~Convert();

	int		toInt() const;
	char	toChar() const;
	float	toFloat() const;
	double	toDouble() const;
	void 	converter() const;
	double	getValue() const;
	std::string	getStr() const;

	class ImpossibleException : public std::exception
	{
	public:
		virtual const char * what() const throw();
	};

	class NonDisplayableException : public  std::exception
	{
	public:
		virtual const char * what() const throw();
	};

};
#endif