/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:42:33 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/03 21:37:36 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_size = 0;
	return ;
}

PhoneBook::~PhoneBook()
{
	return ;
}

void PhoneBook::addContact()
{
	if (this->_size < MAX_CONTACTS) {
		this->contacts[this->_size].createContact();
		this->_size++;
	}
	else {
		for (int i = 0; i < MAX_CONTACTS - 1; i++) {
			this->contacts[i] = this->contacts[i + 1];
		}
		this->contacts[MAX_CONTACTS - 1].createContact();
	}
	return ;
}

void	PhoneBook::printContactsTable(void) const
{
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "index" << '|';
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "First Name" << '|';
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "Last Name" << '|';
	std::cout << std::setfill(' ') << std::setw(10);
	std::cout << "Nick Name" << std::endl;
	std::cout << std::setfill('-') << std::setw(43);
	std::cout << "-" << std::endl;
	for (int i = 0; i < this->_size; i++) {
		Contact c = this->contacts[i];

		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << i << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->truncateString(c.getFirstName(), 10) << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->truncateString(c.getLastName(), 10) << '|';
		std::cout << std::setfill(' ') << std::setw(10);
		std::cout << this->truncateString(c.getNickName(), 10) << std::endl;
	}
	return ;
}

int		PhoneBook::getSize(void) const
{
	return (this->_size);
}

void	PhoneBook::printContactDetails(int contactIndex) const
{
	if (contactIndex < this->_size) {
		this->contacts[contactIndex].printDetails();
	}
	else {
		std::cout << "Contact not found" << std::endl;
	}
	return ;
}

std::string	PhoneBook::truncateString(std::string str, size_t maxLength) const
{
	if (str.length() > maxLength) {
		str = str.substr(0, maxLength - 1);
		str.append(".");
	}
	return (str);
}

