/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:31:31 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 22:49:29 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "Animal constructor called" << std::endl;
	this->_type = "Animal";
}

Animal::Animal(Animal const & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

void Animal::makeSound() const {
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const {
	return this->_type;
}