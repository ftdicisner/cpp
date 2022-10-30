/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:03:54 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:28:27 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie::Zombie(std::string name): _name(name) {
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