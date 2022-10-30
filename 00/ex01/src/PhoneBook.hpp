/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 20:52:11 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/03 21:31:38 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# define MAX_CONTACTS 8

# include "Contact.hpp"

class PhoneBook
{
private:
	int			_size;

	std::string truncateString(std::string str, size_t maxLength) const;
public:
	PhoneBook();
	~PhoneBook();
	void	addContact();
	void	printContactsTable(void) const;
	void	printContactDetails(int contactIndex) const;
	
	int		getSize(void) const;
	Contact	contacts[MAX_CONTACTS];
};

#endif