#ifndef WHATEVER_HPP
#define WHATEVER_HPP
template<typename T>
void swap(T& first, T& second) 
{
	T tmp = first;
	first = second;
	second = tmp;
}
template<typename T>
T& min(T& first, T& second) 
{
	if (first < second)
		return first;
	if (second < first)
		return second;
	else
		return second;
}
template<typename T>
T& max(T& first, T& second) 
{
	if (first > second)
		return first;
	if (second > first)
		return second;
	else
		return second;
}
#endif