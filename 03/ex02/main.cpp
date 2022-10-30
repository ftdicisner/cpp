/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:38:33 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 20:34:25 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <cassert>
#include <iostream>

int main()
{
	FragTrap fragTrap("FragTrapy");

	std::cout << "------------------" << std::endl;
	std::cout << "initial stats:" << std::endl;
	std::cout << "hit points: " << fragTrap.getHitPoints() << std::endl;
	std::cout << "energy points: " << fragTrap.getEnergyPoints() << std::endl;
	std::cout << "attack damage: " << fragTrap.getAttackDamage() << std::endl;
	std::cout << "------------------" << std::endl;

	fragTrap.attack("enemy");
	
	assert(fragTrap.getHitPoints() == 100);
	assert(fragTrap.getEnergyPoints() == 99);

	fragTrap.takeDamage(5);

	assert(fragTrap.getHitPoints() == 95);
	assert(fragTrap.getEnergyPoints() == 99);

	fragTrap.beRepaired(5);

	assert(fragTrap.getHitPoints() == 100);
	assert(fragTrap.getEnergyPoints() == 98);

	fragTrap.highFivesGuys();

	fragTrap.takeDamage(100);
	assert(fragTrap.getHitPoints() == 0);

	fragTrap.highFivesGuys();
	// ScavTrap is dead now, can't do anything

	return (0);
}