/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:27:26 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 22:49:22 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal {
	public:
		Animal();
		Animal(Animal const & src);
		virtual ~Animal();

		Animal & operator=(Animal const & rhs);

		virtual void makeSound() const;

		virtual std::string getType() const;
	protected:
		std::string _type;
};

#endif