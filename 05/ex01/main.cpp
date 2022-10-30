/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:06:07 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:56:33 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
	// Test1:
	// The form can't be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 139);
		Form f("Form1", 10, 10);

		std::cout << std::endl;
		std::cout << "Test1: " << std::endl;
		try {
			b.signForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	}

	// Test2:
	// The form can't be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 141);
		Form f("Form1", 140, 140);

		std::cout << std::endl;
		std::cout << "Test2: " << std::endl;
		try {
			b.signForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	}

	// Test3:
	// The form can be signed by the bureaucrat
	{
		Bureaucrat b("Diego", 10);
		Form f("Form1", 140, 140);

		std::cout << std::endl;
		std::cout << "Test3: " << std::endl;
		try {
			b.signForm(f);
		}
		catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << b << std::endl;
		std::cout << f << std::endl;
	}
	return 0;
}