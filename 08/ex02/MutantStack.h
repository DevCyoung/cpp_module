#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <stack>
#include <iostream>

template<typename T, typename Container = std::deque<T>>
class MutantStack
	: public std::stack<T, Container>
{
public:	
	typedef typename std::stack<T, Container>::container_type::iterator iterator;

	
public:
	iterator begin();
	iterator end();

public:
	MutantStack();
	MutantStack(const MutantStack<T, Container>& _other);
	MutantStack<T, Container>& operator = (const MutantStack<T, Container>& _other);
	~MutantStack();
};

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack()
{
	std::cout << "Default constructor" << std::endl;
}

template<typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack<T, Container>& _other)
	:std::stack<T>(_other)
{
	std::cout << "Copy constructor" << std::endl;
}


template<typename T, typename Container>
MutantStack<T, Container>& MutantStack<T, Container>::operator=(const MutantStack<T, Container>& _other)
{
	std::stack<T>::operator=(_other);
	std::cout << "operator =" << std::endl;
	return *this;
}

template<typename T, typename Container>
MutantStack<T, Container>::~MutantStack()
{
	std::cout << "Destructor" << std::endl;
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::begin()
{
	return this->c.begin();
}

template<typename T, typename Container>
typename MutantStack<T, Container>::iterator MutantStack<T, Container>::end()
{
	return this->c.end();
}

#endif