/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cle-berr <cle-berr@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:50:00 by cle-berr          #+#    #+#             */
/*   Updated: 2025/04/15 13:13:22 by cle-berr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int replace(char **argv,std::string str)
{
	std::ofstream outfile;
	int pos;
	
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	if (outfile.fail())
		return 1;
	for (int i = 0;str[i];i++)
	{
		pos = str.find(argv[2], i);
		if (pos == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: <file> {replaced} {replacement}" << std::endl;
		return 1;
	}

	std::ifstream infile;
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "The file cant be opened" << std::endl;
		return 1;
	}
	
	char c;
	std::string str;
	while(!infile.eof() && infile >> std::noskipws >> c)
		str += c;

	infile.close();

	return (replace(argv ,str));
}