/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:36:26 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 22:55:13 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
	std::cout << "Cat constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const & src): Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs) {
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Cat sound" << std::endl;
}

std::string Cat::getType() const {
	return this->_type;
}