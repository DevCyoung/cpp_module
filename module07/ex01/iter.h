#ifndef ITER_H
#define ITER_H

template<typename T>
void iter(T* _arrayPtr, size_t _len, void (*_func)(T*))
{
	for (size_t i = 0; i < _len; i++)
	{
		_func(&_arrayPtr[i]);
	}
}

#endif