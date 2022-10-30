/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:10:39 by dicisner          #+#    #+#             */
/*   Updated: 2022/10/29 00:21:35 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <string>
#include <stdint.h>

struct Data
{
	std::string s1;
	int i;
};

uintptr_t serialize(Data *ptr);

Data *deserialize(uintptr_t raw);

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main() {
	Data *data = new Data;
	data->s1 = "Hello World!";
	data->i = 42;
	std::cout << "s1: " << data->s1 << std::endl;
	std::cout << "i: " << data->i << std::endl;

	uintptr_t raw = serialize(data);
	Data *data2 = deserialize(raw);


	std::cout << "s1: " << data2->s1 << std::endl;
	std::cout << "i: " << data2->i << std::endl;
	return (0);
}