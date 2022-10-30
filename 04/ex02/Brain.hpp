/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 19:23:30 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/26 19:33:06 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string		_ideas[100];
	public:
		Brain();
		Brain(Brain const & src);	
		~Brain();
		Brain & operator=(Brain const & rhs);

		void setIdea(int index, std::string idea);
		std::string		getIdea(int index) const;
};

#endif