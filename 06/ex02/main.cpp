/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:35:21 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 00:36:21 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identifier.hpp"

int main(void)
{
	srand(time(NULL));

	Base *base = generate();
	identify(base);
	identify(*base);
	delete base;

	return (0);
}