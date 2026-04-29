/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 19:54:03 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/29 15:13:20 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

std::string	fakeSed(std::string content, std::string s1, std::string s2)
{
	int	i = 0;
	int	pos = 0;
	std::string	newContent;

	if (s1.empty())
		return (content);
	pos = content.find(s1, i);
	while (pos != -1)
	{
		newContent += content.substr(i, pos - i);
		newContent += s2;
		i = pos + s1.length();
		pos = content.find(s1, i);
	}
	newContent += content.substr(i, pos - i);
	return (newContent);
}

int	main(int ac, char **av)
{
	std::string			content;
	std::string			newContent;
	std::string			filename;
	std::ifstream		infile;
	std::ofstream		outfile;
	std::stringstream	buf;

	if (ac != 4)
	{
		std::cout << "Invalid number of args" << std::endl;
		return (1);
	}
	filename = av[1];
	infile.open(av[1]);
	if (!infile.is_open())
	{
		std::cout << "Permission denied: " + filename << std::endl;
		return (1);
	}
	buf << infile.rdbuf();
	content = buf.str();
	outfile.open((filename + ".replace").c_str());
	if (!outfile.is_open())
	{
		std::cout << "Permission denied: " + filename << std::endl;
		return (1);
	}
	newContent = fakeSed(content, av[2], av[3]);
	outfile << newContent;
}