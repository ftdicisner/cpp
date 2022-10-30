/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 08:50:55 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:47:11 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const & src);
		~Bureaucrat();
		Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string const getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();

		void signForm(Form &form);

		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException();
				GradeTooHighException(GradeTooHighException const & src);
				~GradeTooHighException() throw();
				GradeTooHighException & operator=(GradeTooHighException const & rhs);
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException();
				GradeTooLowException(GradeTooLowException const & src);
				~GradeTooLowException() throw();
				GradeTooLowException & operator=(GradeTooLowException const & rhs);
				virtual const char* what() const throw();
		};
};

std::ostream & operator << (std::ostream &o, Bureaucrat &rhs);

#endif