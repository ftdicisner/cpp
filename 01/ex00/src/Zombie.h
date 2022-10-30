/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:14:32 by dicisner          #+#    #+#             */
/*   Updated: 2022/07/07 23:30:33 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include "Zombie.hpp"
# include <string>

Zombie	*newZombie(std::string name);
void	RandomChump(std::string chump);

#endif
