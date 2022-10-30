/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:27:47 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 19:33:45 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & src)
{
	std::cout << "Brain copied" << std::endl;
	*this = src;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain & Brain::operator=(const Brain & rhs)
{
	std::cout << "Brain assigned" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs.getIdea(i);
	return *this;
}

void Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	return this->_ideas[index];
}