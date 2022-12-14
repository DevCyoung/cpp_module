#include "Conversion.h"

#include <iomanip>

Conversion::Conversion()
    :m_strNum("NULL")    
{    
}

Conversion::Conversion(const std::string& _strNum)
    :m_strNum(_strNum)    
{    
}

Conversion::Conversion(const Conversion& _other)
    : m_strNum(_other.m_strNum)    
{
}

Conversion& Conversion::operator=(const Conversion& _other)
{       
    m_strNum = _other.m_strNum;
    return *this;
}

Conversion::~Conversion()
{    
}




void Conversion::PrintChar(double _d, const eConvErr* _out_err) const
{
    eConvErr err = *_out_err;
    char c = toChar(_d, &err);

    std::cout << "char: ";

    switch (err)
    {
    case _NONEERR:
        std::cout << "'" << c << "'";
        break;
    case _IMPOSSIBLE:
        std::cout << "impossible";  
        break;
    case _NONIDSPL:
        std::cout << " Non displayable";
        break;
    case _INF:
        std::cout << "impossible";
        break;
    case _NAN:
        std::cout << "impossible";
        break;
    }

    std::cout << std::endl;
}

void Conversion::PrintInt(double _d, const  eConvErr* _out_err) const
{
    eConvErr err = *_out_err;
    int i = toInt(_d, &err);

    std::cout << "int: ";

    switch (err)
    {
    case _NONEERR:
        std::cout << i;
        break;
    case _IMPOSSIBLE:
        std::cout << "impossible";
        break;
    case _NONIDSPL:
        std::cout << " Non displayable";
        break;
    case _INF:
        std::cout << "impossible";
        break;
    case _NAN:
        std::cout << "impossible";
        break;
    }

    std::cout << std::endl;
}

void Conversion::PrintFloat(double _d, const eConvErr* _out_err) const
{
    eConvErr err = *_out_err;
    float f = toFloat(_d, &err);

    std::cout << "float: ";

    switch (err)
    {
    case _NONEERR:
        std::cout << std::fixed << std::setprecision(1) << f << "f";
        break;
    case _IMPOSSIBLE:
        std::cout << "impossible";
        break;
    case _NONIDSPL:
        std::cout << " Non displayable";
        break;
    case _INF:
        std::cout << "inff";
        break;
    case _NAN:
        std::cout << "nanf";
        break;
    }

    std::cout << std::endl;
}

void Conversion::PrintDouble(double _d, const eConvErr* _out_err) const
{
    eConvErr err = *_out_err;

    std::cout << "double: ";

    switch (err)
    {
    case _NONEERR:
        std::cout << std::fixed << std::setprecision(1) << _d;
        break;
    case _IMPOSSIBLE:
        std::cout << "impossible";
        break;
    case _NONIDSPL:
        std::cout << " Non displayable";
        break;
    case _INF:
        std::cout << "inf";
        break;
    case _NAN:
        std::cout << "nan";
        break;
    }

    std::cout << std::endl;
}

//nor  not inf...nan...
char Conversion::toChar(double _d, eConvErr* _out_err) const
{
	if (32 <= _d && _d <= 127)
	{
		return static_cast<char>(_d);
	}

    if (*_out_err == _NONEERR)
    {
        *_out_err = _NONIDSPL;
    }
    
    return '\0';    
}

//nor  not inf...nan...
int Conversion::toInt(double _d, eConvErr* _out_err) const
{
    if (_d <= 2147483647)
    {
        return static_cast<float>(_d);
    }

    if (*_out_err == _NONEERR)
    {
        *_out_err = _IMPOSSIBLE;
    }    
    return 0;
}

float Conversion::toFloat(double _d, eConvErr* _out_err) const
{
    return static_cast<float>(_d);
}

double Conversion::toDouble(double _d, eConvErr* _out_err) const
{
    return static_cast<double>(_d);
}

void Conversion::Print()
{    
    eConvErr _err = _NONEERR;    
    static std::string _errArray[6] = { "-inff", "+inff", "inff", "-inf", "+inf", "inf"};
    int idx = -1;

    if (m_strNum == "nan")
    {
        _err = _NAN;
    }

    for (size_t i = 0; i < 6; i++)
    {
        if (m_strNum == _errArray[i])
        {            
            _err = _INF;
            break;
        }
    }

    double d = std::strtod(m_strNum.c_str(), nullptr);
        
    PrintChar(d, &_err);
    PrintInt(d, &_err);    
    PrintFloat(d, &_err);    
    PrintDouble(d, &_err);
}

