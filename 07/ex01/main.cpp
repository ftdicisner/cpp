/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:40:46 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 20:00:35 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void iter(T *array, int length, void (*f)(T &))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void print(T x)
{
	std::cout << x << std::endl;
}
template <typename T>
void addOne(T &x) {
	x += 1;
}

void addPony( std::string &str) {
	str += "_Pony";
}

int main(void)
{
	std::cout << "Testing with int:" << std::endl;
	{
		int array[5] = {1, 2, 3, 4, 5};
		iter(array, 5, &print);
	}

	std::cout << std::endl;
	std::cout << "Testing with int, modifying each element:" << std::endl;
	{
		int array[5] = {1, 2, 3, 4, 5};
		iter(array, 5, addOne);
		iter(array, 5, print);
	}

	std::cout << std::endl;
	std::cout << "Testing with string, modifying each element:" << std::endl;
	std::string arrays[5] = {"enie", "minie", "miny", "moe", "catch"};

	iter(arrays, 5, addPony);
	iter(arrays, 5, print);
	
	return 0;
}