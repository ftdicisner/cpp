/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:15:06 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 15:16:38 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(MutantStack const &src) : std::stack<T>(src) {};
		~MutantStack() {};

		MutantStack &operator=(MutantStack const &rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		};

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {
			return std::stack<T>::c.begin();
		};

		iterator end() {
			return std::stack<T>::c.end();
		};
};

#endif