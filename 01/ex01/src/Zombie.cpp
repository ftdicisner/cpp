/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:03:54 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:51:04 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(): _name("default") {
	std::cout << "Zombie " << _name << " created" << std::endl;
	return ;
}

Zombie::Zombie(std::string name): _name(name) {
	std::cout << "Zombie " << _name << " created" << std::endl;
	return ;
}

Zombie::~Zombie() {
	std::cout << "Zombie " << _name << " died" << std::endl;
	return ;
}

void Zombie::announce() const {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}