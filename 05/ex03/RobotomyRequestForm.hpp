/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:18:43 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 12:15:26 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;

	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();
		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);

		std::string const getTarget() const;

		void execute(Bureaucrat const & executor) const;
};

#endif