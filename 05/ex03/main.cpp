/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:06:07 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 16:20:47 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main()
{
	// Test1:
	// The form can be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 1);
		Intern i;
		Form *f = i.makeForm("PresidentialPardonForm", "DiegoTarget");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test1: " << std::endl;
		try {
			b.signForm(*f);
			b.executeForm(*f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		delete f;
	}

	// Test2:
	// The form can be signed by the bureaucrat
	{
		std::cout << "Test2: " << std::endl;
		Bureaucrat b("Diego", 1);
		Intern i;
		Form *f = i.makeForm("RobotomyRequestForm", "DiegoTarget");
		std::cout << b << std::endl;

		std::cout << std::endl;
		try {
			b.signForm(*f);
			b.executeForm(*f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}

		delete f;
	}

	// Test3:
	// The form was not found
	{
		std::cout << "Test3: " << std::endl;
		Bureaucrat b("Diego", 1);
		Intern i;

		std::cout << b << std::endl;
		try {
			Form *f = i.makeForm("aaa", "DiegoTarget");
			delete f;
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	return 0;
}