/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:44:53 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 15:00:33 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	{
		std::cout << "---------" << std::endl;
		std::cout << "Testing inyecting a vector" << std::endl;

		std::vector<int> v;
		v.push_back(1);
		v.push_back(42);
		v.push_back(34);
		v.push_back(5);
		v.push_back(-34);

		Span sp2 = Span(100);
		sp2.addRange(v.begin(), v.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	{
		std::cout << "-----------" << std::endl;
		std::cout << "Testing with 10000 numbers" << std::endl;

		Span sp2 = Span(10000);

		std::vector<int> v(10000, 1);
		sp2.addRange(v.begin(), v.end());

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;	
	}

	{
		std::cout << "-----------" << std::endl;
		std::cout << "Testing with 10000 numbers, differnt span" << std::endl;

		Span sp2 = Span(10000);

		std::vector<int> v(9997, 1);
		sp2.addRange(v.begin(), v.end());
		sp2.addNumber(1000000);
		sp2.addNumber(500000);

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;	
	}

	{
		std::cout << "-----------" << std::endl;
		std::cout << "Testing array full Exception" << std::endl;

		Span sp2 = Span(2);

		sp2.addNumber(1);
		sp2.addNumber(2);
		try {
			sp2.addNumber(3);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "-----------" << std::endl;
		std::cout << "Testing array full Exception" << std::endl;

		Span sp2 = Span(2);
		std::vector<int> v(2, 1);

		sp2.addNumber(1);
		sp2.addNumber(2);
		try {
			sp2.addRange(v.begin(), v.end());
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		std::cout << "-----------" << std::endl;
		std::cout << "Testing array empty Exception" << std::endl;

		Span sp2 = Span(2);

		try {
			sp2.shortestSpan();
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	

	return 0;
}