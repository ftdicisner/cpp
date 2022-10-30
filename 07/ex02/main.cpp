/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:06:28 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 20:28:40 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <string>

int main() {
	{
		Array<int> a(5);

		std::cout << "Size: " << a.size() << std::endl;

		std::cout << "intial array: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		for (unsigned int i = 0; i < a.size(); i++)
			a[i] = i;

		std::cout << "modified array: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		try {
			std::cout << "trying to access element 5: " << a[5] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

		{
		Array<std::string> a(10);

		std::cout << "Size: " << a.size() << std::endl;

		std::cout << "intial array: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		for (unsigned int i = 0; i < a.size(); i++) {
			a[i] = "pony";
		}

		std::cout << "modified array: ";
		for (unsigned int i = 0; i < a.size(); i++)
			std::cout << a[i] << std::endl;

		try {
			std::cout << "trying to access element 10: " << a[10] << std::endl;
		}
		catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	return (0);
}