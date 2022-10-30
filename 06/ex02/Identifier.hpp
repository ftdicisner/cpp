/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identifier.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:29:20 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 00:30:27 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

#include <iostream>
#include <stdlib.h>
#include <string>

class Base {
	public:
		virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);

#endif
