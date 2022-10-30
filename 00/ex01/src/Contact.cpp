/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:42:43 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/03 21:31:58 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>

Contact::Contact(void) {
	return ;
}

Contact::~Contact(void) {
	return ;
}

void	Contact::createContact(void) {
	std::cout << "First name: ";
	std::cin >> this->_firstName;
	std::cout << "Last name: ";
	std::cin >> this->_lastName;
	std::cout << "Nickname: ";
	std::cin >> this->_nickName;
	std::cout << "Phone number: ";
	std::cin >> this->_phoneNumber;
	std::cout << "Darkest secret: ";
	std::cin >> this->_darkestSecret;

	return ;
}

void	Contact::printDetails(void) const {
	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl;
}

std::string	Contact::getFirstName(void) const {
	return this->_firstName;
}

std::string Contact::getLastName(void) const {
	return this->_lastName;
}

std::string Contact::getNickName(void) const {
	return this->_nickName;
}

std::string Contact::getPhoneNumber(void) const {
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret(void) const {
	return this->_darkestSecret;
}