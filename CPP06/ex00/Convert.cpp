#include "Convert.hpp"
Convert::Convert() {}
Convert::Convert(std::string str) : value(std::strtod(str.c_str(), nullptr)), str(str) {}
Convert::Convert(Convert const & other) : value(other.value), str(other.str) {}
Convert::~Convert() {}
const char *Convert::NonDisplayableException::what() const throw(){return ("I can't visualize ");}
const char *Convert::ImpossibleException::what() const throw(){return ("Impossible");}
Convert & Convert::operator=(Convert const & other)
{
	this->value = other.value;
	this->str = other.str;
	return *this;
}
double	Convert::getValue() const{return this->value;}
std::string Convert::getStr() const{return this->str;}
int Convert::toInt() const
{
	int num = static_cast<int>(getValue());
	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		return static_cast<int>(str[1]);
	if (value == std::numeric_limits<double>::infinity() || value == -std::numeric_limits<double>::infinity() || std::isnan(value))
		throw ImpossibleException();
	return num;
}
char Convert::toChar() const
{
	char ch = static_cast<char>(getValue());

	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
			return str[1];
	else if (ch == std::numeric_limits<double>::infinity() || ch == -std::numeric_limits<double>::infinity() || std::isnan(ch))
		throw Convert::ImpossibleException();
	else if (!(std::isprint(ch)))
		throw Convert::NonDisplayableException();
	return ch;
}
float Convert::toFloat() const
{
	float fl_num = static_cast<float>(getValue());
	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		return static_cast<float>(str[1]);
	return fl_num;
}
double Convert::toDouble() const
{
	double dl = static_cast<double>(getValue());

	if (str.size() == 3 && str[0] == '\'' && str[2] == '\'')
		return static_cast<double>(str[1]);
	return dl;
}
void Convert::converter() const
{
	char	ch;
	int		num;
	float	fl;
	double	dl;
	try
	{
		ch = this->toChar();
		std::cout << "char: " << ch << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "char: " << ex.what() << std::endl;
	}
	try
	{
		num = this->toInt();
		std::cout << "int: " << num << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "int: " << ex.what() << std::endl;
	}
	try
	{
		fl = this->toFloat();
		std::cout <<"float: " << fl;
		if (fl - static_cast<int>(fl) == 0)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "float: " << ex.what() << std::endl;
	}
	try
	{
		dl = this->toDouble();
		std::cout << "double: " << dl;
		if (dl - static_cast<int>(dl) == 0)
			std::cout << ".0" << std::endl;
		std::cout << std::endl;
	}
	catch (std::exception& ex)
	{
		std::cout << "double: " << ex.what() << std::endl;
	}
}