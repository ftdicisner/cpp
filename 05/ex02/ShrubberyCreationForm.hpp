/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:07:39 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 10:08:14 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string const _target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & src);
		~ShrubberyCreationForm();
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const & rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
};

#endif