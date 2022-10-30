/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:27:26 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 20:02:26 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

class AAnimal {
	public:
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		AAnimal & operator=(AAnimal const & rhs);

		virtual void makeSound() const = 0;
		virtual std::string getType() const;
	protected:
		std::string _type;
};

#endif