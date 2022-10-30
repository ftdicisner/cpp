/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:06:07 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:12:41 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	Bureaucrat b("Diego", 1);
	std::cout << b << std::endl;

	// Test1:
	// It would throw an exception and 
	// won't make the increment
	std::cout << std::endl;
	std::cout << "Test1: " << std::endl;
	try {
		b.incrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	// Test2:
	// Decrement should work fine
	std::cout << std::endl;
	std::cout << "Test2: " << std::endl;
	try {
		b.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;

	// Test3:
	// It would throw an exception and
	// won't make the decrement
	std::cout << std::endl;
	std::cout << "Test3: " << std::endl;
	Bureaucrat c("Diego", 150);
	std::cout << b << std::endl;
	try {
		c.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}