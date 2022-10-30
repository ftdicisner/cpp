/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 19:28:31 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 19:29:08 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T & a, T & b);

template <typename T>
T const & min(T const & a, T const & b);

template <typename T>
T const & max(T const & a, T const & b);

#endif