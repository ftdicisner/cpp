/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:19:10 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 10:32:06 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	(void)rhs;
	return (*this);
}

std::string const RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	else if (!getSigned())
		throw std::exception();

	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Robotomization failed" << std::endl;
}