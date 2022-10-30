/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:24:06 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 18:02:57 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_hitPoints = rhs.getHitPoints();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_attackDamage = rhs.getAttackDamage();
	}
	return (*this);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_energyPoints);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->_hitPoints);
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

void    ClapTrap::attack(std::string const & target)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of hitPoints!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
	if (this->_hitPoints < amount)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy!" << std::endl;
		return ;
	}
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of hitPoints!" << std::endl;
		return ;
	}
	this->_energyPoints--;

	if (MAX_UINT - this->_hitPoints <= amount)
		this->_hitPoints = MAX_UINT;
	else
		this->_hitPoints += amount;

	std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
}