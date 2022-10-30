/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:58:40 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 22:59:12 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs) {
	std::cout << "WrongAnimal assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

void WrongAnimal::makeSound() const {
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->_type;
}
