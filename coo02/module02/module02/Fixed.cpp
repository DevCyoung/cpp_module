#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
	: m_iFixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& _fixed)
	: m_iFixedPoint(_fixed.m_iFixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = _fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const bit)
	: m_iFixedPoint(0)
{
	std::cout << "Int constructor called" << std::endl;
	this->m_iFixedPoint = (bit << Fixed::bits);

}

Fixed::Fixed(float const bit)
	: m_iFixedPoint(0)
{
	std::cout << "Float constructor called" << std::endl;
	this->m_iFixedPoint = roundf(bit * (1 << Fixed::bits));

}



int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return m_iFixedPoint;
}

void Fixed::setRawBits(int const _raw)
{
	this->m_iFixedPoint = _raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->m_iFixedPoint / (float)(1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->m_iFixedPoint >> Fixed::bits);

}


Fixed& Fixed::operator=(const Fixed& _fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->m_iFixedPoint = _fixed.m_iFixedPoint;	
	return *this;
}


Fixed& max(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);

}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	return (Fixed::max(a, b));
}

Fixed& min(Fixed& a, Fixed& b)
{
	if (a > b)
		return (b);
	return (a);

}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	return (Fixed::min(a, b));

}


std::ostream& operator<<(std::ostream& out, Fixed const& value)
{
	out << value.toFloat();
	return (out);
}


bool Fixed::operator>(Fixed const& other) const
{
	return getRawBits() > other.getRawBits();	
}

bool Fixed::operator<(Fixed const& other) const
{	
	return other > *this;
}

bool Fixed::operator>=(Fixed const& other) const
{
	return (*this < other) == false;
}

bool Fixed::operator<=(Fixed const& other) const
{
	return (*this > other) == false;
}

bool Fixed::operator==(Fixed const& other) const
{
	return !( *this > other == false &&  *this < other == false);
}

bool Fixed::operator!=(Fixed const& other) const
{
	return !(*this == other);
}

Fixed Fixed::operator+(Fixed const& other)
{
	return Fixed();
}

Fixed Fixed::operator-(Fixed const& other)
{
	Fixed val;

	val.setRawBits(getRawBits() + other.getRawBits());
	return val;
}

Fixed Fixed::operator*(Fixed const& other)
{
	Fixed val;

	val.setRawBits(getRawBits() * other.getRawBits());
	return Fixed();
}

Fixed Fixed::operator/(Fixed const& other)
{
	Fixed val;

	val.setRawBits(getRawBits() / other.getRawBits());
	return Fixed();
}

Fixed Fixed::operator++()
{	
	m_iFixedPoint++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	operator++();
	return (tmp);
}


Fixed Fixed::operator--(int)
{
	m_iFixedPoint--;
	return *this;
}

Fixed Fixed::operator--()
{
	Fixed tmp = *this;
	operator--();
	return (tmp);
}
