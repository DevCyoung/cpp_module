#ifndef ARRAY_H
#define ARRAY_H
#include <exception>

template<typename T>
class Array
{
private:
	T* m_arr;
	unsigned int m_len;
	
public:
	Array& operator = (const Array& _other);
	T& operator[] (int idx);

public:
	unsigned int size() const;

public:
	Array();
	Array(unsigned int _len);	
	
	Array(const Array& _other);
	
	~Array();

public:
	class OutOfrangeException
		: public std::exception
	{
	public:
		virtual const char* what() const
		{
			return "Exception: OutOfrangeException!";
		}
	};
};

template<typename T>
Array<T>::Array()
	: m_len(1)
	, m_arr(NULL)
{
	m_arr = new T[m_len];
}

template<typename T>	
Array<T>::Array(unsigned int _len)
	: m_len(_len)
	, m_arr(NULL)
	
{
	m_arr = new T[m_len];
}

template<typename T>
Array<T>::Array(const Array& _other)
	: m_len(_other.m_len)
	, m_arr(NULL)
{
	m_arr = new T[m_len];

	for (size_t i = 0; i < m_len; i++)
	{
		m_arr[i] = _other.m_arr[i];
	}
}

template<typename T>
T& Array<T>::operator[](int idx)
{
	if (idx < 0 || idx >= m_len)
	{
		throw Array<T>::OutOfrangeException();
	}

	return m_arr[idx];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return m_len;
}


template<typename T>
Array<T>& Array<T>::operator=(const Array<T>& _other)
{
	if (NULL != m_arr)
	{
		delete[] m_arr;
	}

	m_len = _other.m_len;

	m_arr = new T[m_len];
	for (size_t i = 0; i < m_len; i++)
	{
		m_arr[i] = _other.m_arr[i];
	}
	return *this;
}



template<typename T>
Array<T>::~Array()
{
	if (m_arr != NULL)
	{
		delete[] m_arr;
	}	
}

#endif