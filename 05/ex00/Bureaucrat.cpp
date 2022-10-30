/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 08:58:13 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:08:17 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src.getName()), _grade(src.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if (this != &rhs)
	{
		_grade = rhs.getGrade();
	}
	return *this;
}

std::string const Bureaucrat::getName() const
{
	return _name;
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

void Bureaucrat::incrementGrade()
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
}

Bureaucrat::GradeTooHighException & Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
}

Bureaucrat::GradeTooLowException & Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

std::ostream & operator<<(std::ostream & o, Bureaucrat & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
