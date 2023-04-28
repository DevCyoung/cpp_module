#include "PmergeMe.h"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe& _other)
{
}

PmergeMe::~PmergeMe()
{
}

void PmergeMe::mergeSort(std::vector<int>::iterator begin, std::vector<int>::iterator end, int(*comp)(int a, int b))
{
    //

    if (end - begin < 4)
    {
        insertSort(begin, end, comp);
        return;
    }

    std::vector<int>::iterator mid = begin + (end - begin) / 2;

    mergeSort(begin, mid, comp);
    mergeSort(mid, end, comp);

    std::vector<int> temp(end - begin);
    std::vector<int>::iterator k = temp.begin();

    std::vector<int>::iterator s = begin;
    std::vector<int>::iterator j = mid;

    while (s != mid || j != end)
    {
        if (s == mid)
        {
            *k++ = *j++;
        }
        else if (j == end)
        {
            *k++ = *s++;
        }        
        else if (comp(*s, *j) < 0)
        {
            *k++ = *s++;
        }
        else
        {
            *k++ = *j++;
        }
    }

    for (std::vector<int>::iterator i = begin, k = temp.begin(); k != temp.end(); i++, k++)
    {
        *i = *k;
    }
}

void PmergeMe::insertSort(std::vector<int>::iterator begin, std::vector<int>::iterator end, int(*comp)(int a, int b))
{        
    for (std::vector<int>::iterator i = begin; i != end; i++)
    {
        std::vector<int>::iterator j = i;
        while (j != begin && comp(*(j - 1), *j) > 0)
        {
            this->swap(j - 1, j);            
            j--;
        }
    }
}

void PmergeMe::swap(std::vector<int>::iterator a, std::vector<int>::iterator b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

}
