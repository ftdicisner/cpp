/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:09:22 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 10:17:58 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : 
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : 
	Form(src.getName(), src.getGradeToSign(), src.getGradeToExecute()), _target(src.getTarget())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
	}
	return *this;
}

std::string const ShrubberyCreationForm::getTarget() const
{
	return _target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getGradeToExecute())
		throw Form::GradeTooLowException();
	else if (!getSigned())
		throw std::exception();
	
	std::string	nameFile = this->_target + "_shrubbery";
	std::ofstream file;
	file.open(nameFile.c_str(), std::ofstream::out | std::ofstream::trunc);
	if (!file.is_open())
	{
		std::cout << "Something wrong creating the _shrubbery file" << std::endl;
		file.close();
		return ;
	}

	file	<< "           ,#######,\n"
		<< "       ,,,.   ,######/##,  .oo0000o.\n"
		<< "    ,&%%&%&&%,#####/######,0000\\00/0o\n"
		<< "   ,%&\\%&&%&&%,###\\###/###00\\00000/00'\n"
		<< "   %&&%&%&/%&&%##\\##/ /###00000\\00000'\n"
		<< "   %&&%/ %&%%&&##\\ V /##' `00\\0 `/00'\n"
		<< "   `&%\\ ` /%&'    |.|        \\ '|0'\n"
		<< "       |o|        | |         | |\n"
		<< "       |.|        | |         | |\n"
		<< "jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n";
	file.close();
	
	std::cout << "ASCII trees created!" << std::endl;
	return ;
};
	

