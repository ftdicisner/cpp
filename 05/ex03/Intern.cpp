/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:03:32 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 16:21:18 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern::~Intern()
{}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::_createShrubbery(std::string  target)
{
	return new ShrubberyCreationForm(target);
}

Form * Intern::_createRobotomy(std::string  target)
{
	return new RobotomyRequestForm(target);
}

Form * Intern::_createPresidential(std::string target)
{
	return new PresidentialPardonForm(target);
}

const char *Intern::FormNotFoundException::what() const throw()
{
	return "Form not found";
}

Form * Intern::makeForm(std::string const & formName, std::string const & target)
{
	std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Form * ( Intern::*f[] ) ( const std::string ) = { &Intern::_createShrubbery, &Intern::_createRobotomy, &Intern::_createPresidential };
	for (int i = 0; i < 3; i++)
	{
		if (forms[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (this->*f[i])(target);
		}
	}

	throw FormNotFoundException();
	return NULL;
}

