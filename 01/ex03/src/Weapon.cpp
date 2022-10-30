/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:24:57 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/12 00:01:24 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

std::string const &Weapon::getType()
{
	return this->_type;
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}