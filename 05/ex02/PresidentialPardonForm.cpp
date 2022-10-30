/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:23:56 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 10:31:16 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _target(src.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return (*this);
}

std::string const PresidentialPardonForm::getTarget() const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
		throw std::exception();
	else if (executor.getGrade() > this->getGradeToExecute())
		throw Form::GradeTooLowException();
	else
		std::cout << this->getTarget() << " has been pardoned by Hatori Hanzo." << std::endl;
}
