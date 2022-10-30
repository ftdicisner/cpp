/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:02:59 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 16:17:19 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"

class Intern
{
	private:
		Form * _createShrubbery(std::string target);
		Form * _createRobotomy(std::string target);
		Form * _createPresidential(std::string target);

	public:
		Intern();
		Intern(Intern const & src);
		~Intern();
		Intern & operator=(Intern const & rhs);

		Form * makeForm(std::string const & formName, std::string const & target);

	class FormNotFoundException : public std::exception
	{
		public:
			virtual const char * what() const throw();
	};
};

#endif