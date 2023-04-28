#pragma once

#include <vector>
#include <list>

#include <iterator>

class PmergeMe
{
    template<typename STLType, typename Iterator>
    void myFunction(Iterator begin, Iterator end, int (*comp)(int a, int b))
    {

    }

public:
    template<typename STLType, typename Iterator = typename STLType::iterator>
    void sort(Iterator begin, Iterator end, int (*comp)(int a, int b));

private:
    template<typename Iterator>
    void InsertSort(Iterator begin, Iterator end, int (*comp)(int a, int b));

    template<typename Iterator>
    void IterSwap(Iterator a, Iterator b);

private:
    template<typename Iterator>
    int GetIterLength(Iterator begin, Iterator end);

    template<typename Iterator>
    Iterator GetIterNext(Iterator begin, int nextCnt);

public:
    void mergeSort(std::vector<int>::iterator begin, std::vector<int>::iterator end, int (*comp)(int a, int b));

private:
    void insertSort(std::vector<int>::iterator begin, std::vector<int>::iterator end, int (*comp)(int a, int b));
    void swap(std::vector<int>::iterator a, std::vector<int>::iterator b);

public:
    PmergeMe();
    PmergeMe(const PmergeMe& _other);
    ~PmergeMe();
};

template<typename STLType, typename Iterator>
inline void PmergeMe::sort(Iterator begin, Iterator end, int(*comp)(int a, int b))

{
    const int length = GetIterLength<Iterator>(begin, end);


    if (length < 4)
    {
        InsertSort(begin, end, comp);
        return;
    }

    Iterator mid = GetIterNext(begin, length / 2);

    sort<STLType>(begin, mid, comp);
    sort<STLType>(mid, end, comp);

    STLType temp(length);
    Iterator k = temp.begin();

    Iterator s = begin;
    Iterator e = mid;

    while (s != mid || e != end)
    {
        if (s == mid)
        {
            *k++ = *e++;
        }
        else if (e == end)
        {
            *k++ = *s++;
        }
        else if (comp(*s, *e) < 0)
        {
            *k++ = *s++;
        }
        else
        {
            *k++ = *e++;
        }
    }

    for (Iterator i = begin, k = temp.begin(); k != temp.end(); i++, k++)
    {
        *i = *k;
    }
}

template<typename Iterator>
inline void PmergeMe::InsertSort(Iterator begin, Iterator end, int(*comp)(int a, int b))
{
    for (Iterator i = begin; i != end; i++)
    {
        Iterator j = i;
        
        while (j != begin)
        {
            Iterator prevIter = GetIterNext(j, -1);
            if (comp(*prevIter, *j) > 0)
            {
                IterSwap(prevIter, j);
            }

            
            j--;
        }
    }
}

template<typename Iterator>
inline void PmergeMe::IterSwap(Iterator a, Iterator b)
{
    Iterator temp = a;
    *a = *b;
    *b = *temp;
}

template<typename Iterator>
inline int PmergeMe::GetIterLength(Iterator begin, Iterator end)
{
    int result = 0;

    for (; begin != end; begin++)
    {
        ++result;
    }

    return result;
}

template<typename Iterator>
inline Iterator PmergeMe::GetIterNext(Iterator begin, int nextCnt)
{
    Iterator result = begin;

    while (nextCnt != 0)
    {
        if (nextCnt < 0)
        {
            --result;
            ++nextCnt;
        }
        else
        {
            ++result;
            --nextCnt;
        }
    }

    return result;
}
