/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:21:41 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:53:55 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("default"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{}

Form::Form(std::string const name, int gradeToSign, int gradeToExecute):
 _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) 
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src): 
	_name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(src.getGradeToExecute())
{
}

Form::~Form()
{
}

Form & Form::operator=(Form const & rhs)
{
	if (this != &rhs)
	{
		_signed = rhs.getSigned();
	}
	return *this;
}

std::string const Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeToSign() const
{
	return _gradeToSign;
}

int Form::getGradeToExecute() const
{
	return _gradeToExecute;
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign) {
		throw Form::GradeTooLowException();
	}
	else {
		_signed = true;
		
	}
}

Form::GradeTooHighException::GradeTooHighException()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src)
{
	*this = src;
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
}

Form::GradeTooHighException & Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

Form::GradeTooLowException::GradeTooLowException()
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src)
{
	*this = src;
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
}

Form::GradeTooLowException & Form::GradeTooLowException::operator=(GradeTooLowException const & rhs)
{
	(void)rhs;
	return *this;
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream & operator<<(std::ostream & o, Form & rhs)
{
	o << "Form " << rhs.getName() << " is " << (rhs.getSigned() ? "signed" : "unsigned") << " and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExecute() << " to execute." << std::endl;
	return o;
}
