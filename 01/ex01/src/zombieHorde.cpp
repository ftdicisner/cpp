/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:11 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:51:19 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombie = new Zombie[N];

	for (int i = 0; i < N; i++) {
		zombie[i].setName(name);
	}
	return zombie;
}