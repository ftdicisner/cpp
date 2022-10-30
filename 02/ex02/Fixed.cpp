/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:39:56 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/23 19:40:22 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixedPointValue = 0;
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPointValue = n << this->_fractionalBits;
}

Fixed::Fixed(float const n)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPointValue = roundf(n * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}	

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue * 1.0 / (1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

std::ostream &operator << (std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->_fixedPointValue > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->_fixedPointValue < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->_fixedPointValue >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->_fixedPointValue <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->_fixedPointValue == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->_fixedPointValue != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed &Fixed::operator++()
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed &Fixed::operator--()
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b ? a : b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}