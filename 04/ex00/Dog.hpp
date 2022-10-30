/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:32:59 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 23:07:18 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);

		virtual void makeSound() const;

		virtual std::string getType() const;
};

#endif