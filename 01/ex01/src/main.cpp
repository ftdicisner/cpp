/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:13:48 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:51:38 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

#include <iostream>

int	main() {
	Zombie	*zombies = zombieHorde(10, "dicisner");

	for (int i = 0; i < 10; i++) {
		zombies[i].announce();
	}

	delete [] zombies;

	return (0);
}