/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:31:31 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 20:03:22 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() {
	std::cout << "Animal Constructor called" << std::endl;
	this->_type = "Animal";
}

AAnimal::AAnimal(AAnimal const & src) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
}

AAnimal::~AAnimal() {
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs) {
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &rhs) {
		this->_type = rhs.getType();
	}
	return *this;
}

std::string AAnimal::getType() const {
	return this->_type;
}