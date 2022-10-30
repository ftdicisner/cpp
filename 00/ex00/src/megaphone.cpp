/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/26 20:38:30 by dicisner          #+#    #+#             */
/*   Updated: 2022/06/30 20:29:20 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char const *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++) {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)std::toupper(argv[i][j]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}