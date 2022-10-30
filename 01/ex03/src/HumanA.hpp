/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:51:49 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/11 23:52:57 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		void attack();
};

#endif