/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:40:44 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 20:53:08 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_dname = "DefaultDiamondTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;
}

DiamondTrap::DiamondTrap(std::string name)
{
	this->_dname = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 30;

	this->_name = name + "_clap_name";
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->_dname << std::endl;
	std::cout << "ClapTrap name: " << this->_name << std::endl;
}