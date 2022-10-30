/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:01:17 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 20:22:44 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdexcept>
# include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _size;
	public:
		Array(void) : _array(NULL), _size(0)
		{
			std::cout << "Default constructor called" << std::endl;
		}
		Array(unsigned int n) : _array(new T[n]), _size(n)
		{
			std::cout << "Parametric Constructor called" << std::endl;
		}
		Array(Array const & src) : _array(NULL)
		{
			std::cout << "Copy constructor called" << std::endl;
			*this = src;
		}
		~Array(void) 
		{
			std::cout << "Destructor called" << std::endl;
			delete [] this->_array;
		}
		Array & operator=(Array const & rhs) 
		{
			std::cout << "Assignation operator called" << std::endl;
			if (this != &rhs)
			{
				this->_size = rhs._size;
				this->_array = new T[this->_size];
				for (unsigned int i = 0; i < this->_size; i++)
					this->_array[i] = rhs._array[i];
			}
			return (*this);
		}
		T & operator[](unsigned int i) 
		{
			if (i >= this->_size)
				throw Array::OutOfLimitsException();
			return (this->_array[i]);
		}
		unsigned int size(void) const { return (this->_size); }

	class OutOfLimitsException : public std::exception
		{
			public:
				virtual const char *what() const throw() { return ("Out of limits"); }
		};
};

#endif