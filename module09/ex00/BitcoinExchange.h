#pragma once

#include <map>

enum class MONTH
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEPT,
    OCT,
    NOV,
    DEC,
};

class BitcoinExchange
{
private:
    std::map<int, int> m_map;

private:
    int GetLastDayOfMonth(const int _year, const MONTH _month);

    

public:
    BitcoinExchange();
    ~BitcoinExchange();
};

