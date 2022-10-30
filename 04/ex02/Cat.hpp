/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:35:38 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 20:03:45 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp" 

class Cat : public AAnimal {
	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		Cat & operator=(Cat const & rhs);

		virtual void makeSound() const;
		virtual std::string getType() const;
		Brain *getBrain() const;
	private:
		Brain	*_brain;
};

#endif