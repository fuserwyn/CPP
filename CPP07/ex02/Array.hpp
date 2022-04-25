#ifndef ARRAY_HPP
#define ARRAY_HPP

template<typename T>
class Array 
{
public:
	class OutOfRangeException: public std::exception 
	{
	public:
		const char* what() const throw() {return "Index out of range";}
	};
	Array() 
	{
		_arr = new T[0];
		_size = 0;
	}
	Array(unsigned int n)
	{
		_arr = new T[n];
		_size = n;
	}
	Array(const Array& other) 
	{
		_arr = new T[other.size()];
		_size = other.size();
		for (int i = 0; i < other.size(); i++)
			_arr[i] = other._arr[i];
	}
	~Array() {delete [] this->_arr;};
	Array& operator=(const Array& other) 
	{
		std::cout << "********** Assignment operator called **********" << std::endl;
		if (this->_arr)
			delete [] this->_arr;
		_arr = new T[other.size()];
		_size = other.size();
		for (int i = 0; i < other.size(); i++)
			_arr[i] = other._arr[i];
		return *this;
	}
	T& operator[](int index) const 
	{
		if (index < 0)
			throw OutOfRangeException();
		else if (index >= this->size()) 
			throw OutOfRangeException();
		return _arr[index];
	}
	T		getArray(unsigned int idx) const{return this->_arr[idx]; }
	void	setArray(T x, unsigned int idx){this->_arr[idx] = x;}
	int size() const {return _size;}
private:
	T* _arr;
	int _size;
};

#endif