/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:36:26 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/23 16:55:29 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
