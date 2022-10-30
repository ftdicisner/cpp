/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:11:55 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 18:24:27 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();

	// Some evaluators will say they wanted us to user std::find
	for (; it != ite; it++) {
		if (*it == value) {
			return it;
		}
	}

	return ite;
}

#endif