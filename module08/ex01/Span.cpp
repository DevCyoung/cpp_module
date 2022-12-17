#include "Span.h"
#include <algorithm>
#include <iostream>


Span::Span()
    :m_size(0)
{    
}

void Span::safeSort(std::vector<int>& vecNum) const
{
    if (vecNum.size() <= 1)
    {
        throw std::exception();
    }

    std::sort(vecNum.begin(), vecNum.end());       
}

Span::Span(unsigned int _size)
    :m_size(_size)
{    
}

Span::Span(const Span& _other)
    :m_size(_other.m_size)
    ,m_vecNum(_other.m_vecNum)
{
    
}

Span& Span::operator=(const Span& _other)    
{    
    m_size = _other.m_size;
    m_vecNum.clear();
    m_vecNum = _other.m_vecNum;
    return *this;
}

Span::~Span()
{
}



void Span::addNumber(const int _addNum)
{
    if (m_vecNum.size() >= m_size)
    {
        throw std::exception();
    }

    m_vecNum.push_back(_addNum);
}

void Span::randFill(unsigned int _mod)
{
    m_vecNum.clear();
    for (size_t i = 0; i < m_size; i++)
    {
        addNumber(rand() % _mod);
    }
}

void Span::printInfo() const
{
    std::cout << "----------Span Info----------" << std::endl;
    std::cout << "size : " << m_vecNum.size() << std::endl;
    std::cout << "info : " << std::endl;
    for (size_t i = 0; i < m_vecNum.size(); i++)
    {
        std::cout << m_vecNum[i] << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
}

void Span::printDiffInfo() const
{
    std::vector<int> vecNum(m_vecNum);
    safeSort(vecNum);

    std::cout << "----------Print Sort----------" << std::endl;

    for (size_t i = 0; i < vecNum.size(); i++)
    {
        std::cout << vecNum[i] << "\t";

        if (i > 0)
        {
            std::cout << vecNum[i]  << "\t-\t" << vecNum[i - 1] << "\t=\t" << vecNum[i] - vecNum[i - 1];
        }

        std::cout << std::endl;
    }
    std::cout << "----------------------------" << std::endl;
}



int Span::shortestSpan() const
{
    std::vector<int> vecNum(m_vecNum);
    safeSort(vecNum);

    std::vector<int>::iterator iter = vecNum.begin();
   
    int prev = *iter;
    int diff = *(++iter)-prev;
    ++iter;

    for ( ; iter != vecNum.end(); ++iter)
    {     
        if (*(iter) - prev < diff)
        {
            diff = *(iter)-prev;
        }        
        prev = *iter;
    }
    return diff;
}

int Span::longestSpan() const
{
    std::vector<int> vecNum(m_vecNum);
    safeSort(vecNum);    

    return *(--vecNum.end()) - *(vecNum.begin());
}

