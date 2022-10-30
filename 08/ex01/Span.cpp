/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 14:37:32 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/30 14:52:57 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _size(0), _count(0), _array(NULL) {};

Span::Span(unsigned int n) : _size(n), _count(0), _array(new int[n]) {};

Span::Span(Span const &src) {
	*this = src;
}

Span::~Span() {
	if (this->_array) {
		delete [] this->_array;
	}
}

Span &Span::operator=(Span const &rhs) {
	if (this != &rhs) {
		this->_size = rhs._size;
		this->_count = rhs._count;
		if (this->_array) {
			delete [] this->_array;
		}
		this->_array = new int[this->_size];
		for (unsigned int i = 0; i < this->_count; i++) {
			this->_array[i] = rhs._array[i];
		}
	}
	return *this;
}

void Span::addNumber(int n) {
	if (this->_count == this->_size) {
		throw Span::SpanFullException();
	}
	this->_array[this->_count] = n;
	this->_count++;
}

int Span::shortestSpan() {
	if (this->_count < 1) {
		throw Span::SpanEmptyException();
	}
	if (this->_count < 2) {
		return 0;
	}

	int min = this->_array[1] - this->_array[0];
	if (min < 0) {
		min *= -1;
	}
	for (unsigned int i = 0; i < this->_count - 1; i++) {
		for (unsigned int j = i + 1; j < this->_count; j++) {
			int diff = this->_array[j] - this->_array[i];
			if (diff < 0) {
				diff *= -1;
			}
			if (diff < min) {
				min = diff;
			}
		}
	}
	return min;
}

int Span::longestSpan() {
	if (this->_count < 1) {
		throw Span::SpanEmptyException();
	}
	if (this->_count < 2) {
		return 0;
	}
	int min = this->_array[0];
	int max = this->_array[0];
	for (unsigned int i = 1; i < this->_count; i++) {
		if (this->_array[i] < min) {
			min = this->_array[i];
		}
		if (this->_array[i] > max) {
			max = this->_array[i];
		}
	}
	return max - min;
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
	if (this->_count + (end - begin) > this->_size) {
		throw Span::SpanFullException();
	}
	while (begin != end) {
		this->addNumber(*begin);
		begin++;
	}
}

const char *Span::SpanFullException::what() const throw() {
	return "Span is full";
}

const char *Span::SpanEmptyException::what() const throw() {
	return "Span is empty";
}