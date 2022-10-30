/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:50:36 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/13 17:23:01 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"


int main(int argc, char **argv)
{
	Harl harl;

	if (argc != 2)
	{
		std::cout << "Usage argument: [DEBUG|INFO|WARNING|ERROR]" << std::endl;
		return (1);
	}

	harl.complainFiltered(argv[1]);

	return (0);
}