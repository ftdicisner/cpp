/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:33:09 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 14:51:17 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

class Span {
	private:
		unsigned int _size;
		unsigned int _count;
		int *_array;
	public:
		Span();
		Span(unsigned int n);
		Span(Span const &src);
		~Span();

		Span &operator=(Span const &rhs);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();

		void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class SpanFullException : public std::exception {
		public:
			virtual const char *what() const throw();
	};

	class SpanEmptyException : public std::exception {
		public:
			virtual const char *what() const throw();
	};
};