/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:36:26 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/23 16:49:51 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		~Fixed();
		Fixed &operator=(const Fixed &rhs);
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int _fixedPointValue;
		static const int _fractionalBits = 8;
};