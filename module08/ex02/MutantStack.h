#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template<typename T>
class MutantStack
	: public std::stack<T>
{
public:	
	typedef typename std::stack<T>::container_type::iterator iterator;

	
public:
	iterator begin();
	iterator end();

public:
	MutantStack();
	MutantStack(const MutantStack& _other);
	MutantStack& operator = (const MutantStack& _other);
	~MutantStack();



};



template<typename T>
MutantStack<T>::MutantStack()
{
	std::cout << "Default constructor" << std::endl;
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& _other)
	:std::stack<T>(_other)
{
	std::cout << "Copy constructor" << std::endl;
}


template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& _other)
{
	std::stack<T>::operator=(_other);
	std::cout << "operator =" << std::endl;
	return *this;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
	std::cout << "Destructor" << std::endl;
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template<typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

#endif