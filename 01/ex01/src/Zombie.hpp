/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 22:53:53 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:50:29 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie {
	private:
		std::string	_name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void			announce() const;
		void			setName(std::string name);
};

#endif