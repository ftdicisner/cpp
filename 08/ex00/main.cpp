/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:13:46 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 14:29:46 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include <vector>
#include <map>

#include "easyfind.hpp"

int main() {
	std::list<int> lst1;
	std::vector<int> vec1;
	std::vector<int> vec2(42, 100);

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);

	std::list<int>::iterator it;
	std::list<int>::iterator ite = lst1.end();

	for (it = lst1.begin(); it != ite; it++) {
		std::cout << *it << std::endl;
	}

	int value = 17;

	{
		std::cout << "------------------" << std::endl;
		std::cout << "Finding value " << value << " in the list" << std::endl;

		std::list<int>::iterator it2 = easyfind(lst1, 17);
		if (it2 != ite) {
			std::cout << "Found: " << *it2 << std::endl;
		} else {
			std::cout << "Not found" << std::endl;
		}
	}	

	value = 32;
	{
		std::cout << "------------------" << std::endl;
		std::cout << "Finding value " << value << " in the list" << std::endl;

		std::list<int>::iterator it2 = easyfind(lst1, value);
		if (it2 != ite) {
			std::cout << "Found: " << *it2 << std::endl;
		} else {
			std::cout << "Not found" << std::endl;
		}
	}


	value = 100;

	{
		std::cout << "----------------" << std::endl;
		std::cout << "Finding value " << value << " in the vector" << std::endl;

		std::vector<int>::iterator it4 = easyfind(vec2, value);
		if (it4 != vec2.end()) {
			std::cout << "Found: " << *it4 << std::endl;
		} else {
			std::cout << "Not found" << std::endl;
		}
	}

	value = 200;
	{
		std::cout << "----------------" << std::endl;
		std::cout << "Finding value " << value << " in the vector" << std::endl;

		std::vector<int>::iterator it4 = easyfind(vec2, value);
		if (it4 != vec2.end()) {
			std::cout << "Found: " << *it4 << std::endl;
		} else {
			std::cout << "Not found" << std::endl;
		}
	}
	return 0;
}