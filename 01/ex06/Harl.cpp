/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:41:12 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/13 17:41:38 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <string>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my " 
		<< "7XL-double-cheese-triple-pickle-specialketchup "
		<< "burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout <<"I cannot believe adding extra bacon costs more money. "
		<< "You didn’t put enough bacon in my burger! If you did, "
		<< "I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
		<< "I’ve been coming for years whereas you started "
		<< "working here since last month." << std::endl;
	std::cout << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now."
		<< std::endl;
	std::cout << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	std::string	levels[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			(this->*f[i])();
	}
}

void	Harl::complainFiltered(std::string level)
{
	void	(Harl::*f[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int levelIndex = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
			levelIndex = i;
	}

	switch (levelIndex)
	{
		case 0:
			(this->*f[0])();
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 1:
			(this->*f[1])();
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 2:
			(this->*f[2])();
			(this->*f[3])();
			break;
		case 3:
			(this->*f[3])();
			break;
		default:
			std::cout << "[Probably complaining about insignicant problems]" << std::endl;
	}
}