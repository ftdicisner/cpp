/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crapybook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 21:11:19 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/03 21:30:09 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "Contact.hpp"
# include "PhoneBook.hpp"

void	searchContact(PhoneBook book)
{
	int contactIndex;

	book.printContactsTable();
	std::cout << "Enter the number of the contact you want to search: ";
	std::cin >> contactIndex;
	if (contactIndex < 0 || contactIndex >= book.getSize()) {
		std::cout << "Contact not found" << std::endl;
	}
	else {
		book.printContactDetails(contactIndex);
	}
}

int	main(void) {
	PhoneBook	pb;
	std::string	cmd;
	int			i;
	
	i = 0;
	while (true) {
		std::cout << "Enter a valid command (ADD, SEARCH, EXIT):" << std::endl;
		std::cin >> cmd;

		if (cmd == "ADD") {
			pb.addContact();
			i++;
		}
		else if (cmd == "SEARCH")
			searchContact(pb);
		else if (cmd == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}

	return (0);
}