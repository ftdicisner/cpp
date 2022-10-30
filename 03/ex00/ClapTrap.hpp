/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:21:34 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/24 18:02:29 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# define MAX_UINT 0xffffffff

#include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & src);
		~ClapTrap();

		ClapTrap & operator=(ClapTrap const & rhs);

		void    attack(std::string const & target);
		void    takeDamage(unsigned int amount);
		void    beRepaired(unsigned int amount);
		unsigned int	getHitPoints() const;
		unsigned int	getEnergyPoints() const;
		unsigned int	getAttackDamage() const;
		std::string	getName() const;

	private:
		std::string _name;
		unsigned int         _hitPoints;
		unsigned int         _energyPoints;
		unsigned int         _attackDamage;
};

#endif