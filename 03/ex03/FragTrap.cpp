/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 20:25:19 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 20:32:09 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const & src): ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << "FragTrap assignation operator called" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_energyPoints <= 0)
		std::cout << "FragTrap " << this->_name << " doesn't have enough energy for a high five" << std::endl;
	else
		std::cout << "FragTrap " << this->_name << " gives a high five" << std::endl;
}