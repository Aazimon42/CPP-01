/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 22:05:50 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/02 16:56:42 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of str = " << &string << std::endl;
	std::cout << "stringPTR = " << stringPTR << std::endl;
	std::cout << "stringREF = " << &stringREF << std::endl;
	std::cout << "Value of string = " << string << std::endl;
	std::cout << "Value pointed to by stringPTR = " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF = " << stringREF << std::endl;
}
