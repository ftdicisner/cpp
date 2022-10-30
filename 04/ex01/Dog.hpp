/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:32:59 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 19:37:02 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const & src);
		virtual ~Dog();

		Dog & operator=(Dog const & rhs);

		virtual void makeSound() const;
		virtual std::string getType() const;
		Brain *getBrain() const;
	private:
		Brain	*_brain;	
};

#endif