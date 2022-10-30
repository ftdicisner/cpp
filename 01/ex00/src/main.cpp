/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:13:48 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:16:54 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

#include <iostream>

int	main() {
	Zombie	*zombie = newZombie("dicisner");
	zombie->announce();

	RandomChump("ringo");
	delete zombie;
	return (0);
}