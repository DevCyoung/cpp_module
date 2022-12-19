#ifndef SPAN_H
#define SPAN_H

#include <vector>

class Span
{
private:
	unsigned int		m_size;
	std::vector<int>	m_vecNum;
	
private:
	Span();

private:
	void safeSort(std::vector<int>& vecNum) const;	
	

public:
	Span(unsigned int _size);
	Span(const Span& _other);
	Span& operator = (const Span& _other);
	~Span();

public:
	void addNumber(const int _addNum);
	void randFill(unsigned int _mod);

public:
	void printInfo() const;
	void printDiffInfo() const;

	int shortestSpan() const;
	int longestSpan() const;


	

};

#endif

