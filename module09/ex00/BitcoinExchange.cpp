#include "BitcoinExchange.h"

int BitcoinExchange::GetLastDayOfMonth(const int _year, const MONTH _month)
{
    switch (_month)
    {
    case MONTH::JAN:
        return 31;
        break;
    case MONTH::FEB:

        //À±³â
        if (_year % 4 == 0 && (_year % 400 == 0 || _year     % 100 != 0))
        {
            return 29;
        }              

        return 28;

        break;
    case MONTH::MAR:
        return 31;
        break;
    case MONTH::APR:
        return 30;
        break;
    case MONTH::MAY:
        return 31;
        break;
    case MONTH::JUN:
        return 30;
        break;
    case MONTH::JUL:
        return 31;
        break;
    case MONTH::AUG:
        return 31;
        break;
    case MONTH::SEPT:
        return 30;
        break;
    case MONTH::OCT:
        return 31;
        break;
    case MONTH::NOV:
        return 30;
        break;
    case MONTH::DEC:
        return 31;

    }
    return 0;
}

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::~BitcoinExchange()
{
}
