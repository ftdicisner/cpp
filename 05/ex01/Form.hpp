/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 09:15:37 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/27 09:46:56 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <stdexcept>
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
	public:
		Form();
		Form(std::string const name, int gradeToSign, int gradeToExecute);
		Form(Form const & src);
		~Form();
		Form & operator=(Form const & rhs);

		std::string const getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		void beSigned(Bureaucrat const & bureaucrat);

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

std::ostream & operator << (std::ostream &o, Form &rhs);

#endif
