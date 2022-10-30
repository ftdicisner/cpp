/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:23:25 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 10:23:46 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		std::string const _target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & src);
		~PresidentialPardonForm();
		PresidentialPardonForm & operator=(PresidentialPardonForm const & rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
};

#endif