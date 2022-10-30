/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:58:09 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/25 23:07:24 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const & src);
		virtual ~WrongAnimal();

		WrongAnimal & operator=(WrongAnimal const & rhs);

		void makeSound() const;

		virtual std::string getType() const;
	protected:
		std::string _type;
};

#endif