/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:12:17 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/11 23:16:41 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	strPtr = &str;
	std::string&	strRef = str;

	std::cout << "str addrr: " << &str << std::endl;
	std::cout << "strPtr addrr: " << strPtr << std::endl;
	std::cout << "strRef addrr: " << &strRef << std::endl;

	std::cout << "str: " << str << std::endl;
	std::cout << "strPtr: " << *strPtr << std::endl;
	std::cout << "strRef: " << strRef << std::endl;
	return (0);
}