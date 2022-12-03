#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int m_iFixedPoint;
	static const int bits = 8;

public:
	bool operator>(Fixed const& other) const;
	bool operator<(Fixed const& other) const;
	bool operator>=(Fixed const& other) const;
	bool operator<=(Fixed const& other) const;
	bool operator==(Fixed const& other) const;
	bool operator!=(Fixed const& other) const;

	Fixed operator+(Fixed const& other);
	Fixed operator-(Fixed const& other);
	Fixed operator*(Fixed const& other);
	Fixed operator/(Fixed const& other);

	Fixed operator++(int);
	Fixed operator++();
	Fixed operator--(int);
	Fixed operator--();

	Fixed& operator = (const Fixed& _fixed);

	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);



public:
	int		getRawBits(void) const;
	void	setRawBits(int const _raw);
	float	toFloat(void) const;
	int		toInt(void) const;


public:
	Fixed();
	Fixed(int const bit);
	Fixed(float const bit);
	Fixed(const Fixed& _fixed);
	virtual ~Fixed();
};

std::ostream& operator<<(std::ostream& out, Fixed const& value);
Fixed const& min(Fixed const& a, Fixed const& b);
Fixed const& max(Fixed const& a, Fixed const& b);
Fixed& min(Fixed& a, Fixed& b);
Fixed& max(Fixed& a, Fixed& b);

#endif

