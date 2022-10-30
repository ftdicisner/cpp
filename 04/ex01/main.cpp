/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:38:08 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 19:52:19 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include <iostream>

int main() {
	{
		std::cout << "---Creating a Dog" << std::endl;
		Dog	dog;
		Dog	dog2(dog);
	
		dog.getBrain()->setIdea(0, "Bark at night");
		dog2.getBrain()->setIdea(0, "Bark at sunshine");
		std::cout << dog.getBrain()->getIdea(0) << std::endl;
		std::cout << dog2.getBrain()->getIdea(0) << std::endl;
	}
	{
		std::cout << "---Creating a Cat" << std::endl;
		Cat	cat;
		Cat	cat2(cat);
	
		cat.getBrain()->setIdea(0, "Meow at night");
		cat2.getBrain()->setIdea(0, "Meow at sunshine");
		std::cout << cat.getBrain()->getIdea(0) << std::endl;
		std::cout << cat2.getBrain()->getIdea(0) << std::endl;
	}
	{
		std::cout << "------------------" << std::endl;
		Animal	*animals[100];
		for (int i=0; i < 100; i++) {
			if (i % 2)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		for (int i=0; i < 100; i++)
			delete animals[i];
	}
	return 0;
}