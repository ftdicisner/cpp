/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:06:07 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 11:56:41 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	// Test1:
	// The form can't be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 139);
		PresidentialPardonForm f("Form1");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test1: " << std::endl;
		try {
			b.signForm(f);
			b.executeForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << f << std::endl;
	}

	// Test2:
	// The form can be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 25);
		PresidentialPardonForm f("Form1");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test2: " << std::endl;
		try {
			b.signForm(f);
			b.executeForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << f << std::endl;
	}

	// Test3:
	// The form can be executed by the bureaucrat
	{
		Bureaucrat b("Diego", 5);
		PresidentialPardonForm f("DiegoTarget");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test3: " << std::endl;
		try {
			b.signForm(f);
			b.executeForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << f << std::endl;
	}

	// Test4:
	// The form can be executed by the bureaucrat
	{
		Bureaucrat b("Diego", 5);
		RobotomyRequestForm f("DiegoTarget");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test4: " << std::endl;
		try {
			b.signForm(f);
			b.executeForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << f << std::endl;
	}

	// Test5:
	// The form can be executed by the bureaucrat
	{
		Bureaucrat b("Diego", 5);
		ShrubberyCreationForm f("DiegoTarget");
		std::cout << b << std::endl;

		std::cout << std::endl;
		std::cout << "Test4: " << std::endl;
		try {
			b.signForm(f);
			b.executeForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << f << std::endl;
	}

	return 0;
}