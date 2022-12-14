#ifndef CONVERSION_H
#define CONVERSION_H

#include <iostream>

enum eType
{
	_CHAR,
	_INT,
	_FLOAT,
	_DOUBLE,	
	_NONE,
};

enum eConvErr
{
	_NONEERR	= 0,
	_IMPOSSIBLE = 0x00000002,
	_NONIDSPL	= 0x00000004,
	_INF		= 0x00000008,
	_NAN		= 0x00000010,
};


class Conversion
{
private:
	std::string m_strNum;	

protected:
	Conversion();

private:
	void PrintChar(double _d, const  eConvErr* _out_err) const;
	void PrintInt(double _d, const  eConvErr* _out_err) const;
	void PrintFloat(double _d, const  eConvErr* _out_err) const;
	void PrintDouble(double _d, const  eConvErr* _out_err) const;
	

private:
	char toChar(double _d, eConvErr* _out_err) const;
	int toInt(double _d, eConvErr* _out_err) const;
	float toFloat(double _d, eConvErr* _out_err) const;
	double toDouble(double _d, eConvErr* _out_err) const;
	


public:
	void Print();

public:
	Conversion(const std::string& _strNum);
	Conversion(const Conversion& _other);
	Conversion& operator = (const Conversion& _other);
	~Conversion();
};

#endif

