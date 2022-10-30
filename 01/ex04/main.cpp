/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dicisner <diegocl02@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 22:41:27 by dicisner          #+#    #+#             */
/*   Updated: 2022/09/15 16:08:56 by dicisner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>

void	sedIsForLosers(std::ifstream &in, std::ofstream &out, std::string str1, std::string str2)
{
	std::string line;
	std::string modifiedLine;

	while (std::getline(in, line))
	{
		while (line.find(str1) != std::string::npos)
		{
			int i = line.find(str1);

			modifiedLine.append(line.substr(0, i));
			modifiedLine.append(str2);
			line = line.substr(i + str1.length());
		}
		modifiedLine.append(line);

		out << modifiedLine;
		if (!in.eof())
			out << std::endl;
		modifiedLine.clear();
	}
}

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
		return 1;
	}
	std::string fileinput = argv[1];
	std::string str1 = argv[2];
	std::string str2 = argv[3];

	std::ifstream in;
	std::ofstream out;

	in.open(fileinput.c_str(), std::ifstream::in);
	if (!in.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}

	out.open(fileinput.append(".replace").c_str());
	if (!out.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}

	sedIsForLosers(in, out, str1, str2);

	in.close();
	out.close();

	return 0;
}