#ifndef WHATEVER_H
#define WHATEVER_H

template<typename T>
void swap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(const T& a, const T& b)
{
	if (a >= b)
	{
		return b;
	}
	return a;
}

template<typename T>
T max(const T& a, const T& b)
{
	if (b >= a)
	{
		return b;
	}
	return a;
}
#endif