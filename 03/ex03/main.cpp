/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:38:33 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 20:55:12 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <cassert>
#include <iostream>

int main()
{
	DiamondTrap diamondTrap("DiamondTrapy");

	diamondTrap.whoAmI();

	std::cout << "------------------" << std::endl;
	std::cout << "initial stats:" << std::endl;
	std::cout << "hit points: " << diamondTrap.getHitPoints() << std::endl;
	std::cout << "energy points: " << diamondTrap.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << diamondTrap.getAttackDamage() << std::endl;
	std::cout << "------------------" << std::endl;

	diamondTrap.attack("enemy");
	
	assert(diamondTrap.getHitPoints() == 100);
	assert(diamondTrap.getEnergyPoints() == 49);

	diamondTrap.takeDamage(5);

	assert(diamondTrap.getHitPoints() == 95);
	assert(diamondTrap.getEnergyPoints() == 49);

	diamondTrap.beRepaired(5);

	assert(diamondTrap.getHitPoints() == 100);
	assert(diamondTrap.getEnergyPoints() == 48);

	diamondTrap.highFivesGuys();

	diamondTrap.takeDamage(100);
	assert(diamondTrap.getHitPoints() == 0);

	diamondTrap.highFivesGuys();
	// ScavTrap is dead now, can't do anything

	return (0);
}