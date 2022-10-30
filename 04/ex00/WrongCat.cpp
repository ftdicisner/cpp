/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:04:28 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 01:36:51 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

#include <iostream>

WrongCat::WrongCat() {
	std::cout << "Wrong cat constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat() {
	std::cout << "Wrong cat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Wrongcat sound!" << std::endl;
}
