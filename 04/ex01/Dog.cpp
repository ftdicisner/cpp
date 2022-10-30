/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:33:29 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 19:51:29 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

#include <iostream>

Dog::Dog() {
	std::cout << "Dog Constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const & src): Animal(src) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog & Dog::operator=(Dog const & rhs) {
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
		this->_brain = new Brain(*(rhs.getBrain()));
	}
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Dog sound" << std::endl;
}

std::string Dog::getType() const {
	return this->_type;
}

Brain *Dog::getBrain() const {
	return this->_brain;
}