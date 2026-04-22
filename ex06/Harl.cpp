/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 13:36:50 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/22 19:27:22 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			this->level = i;
			return ;
		}
	}
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	this->level = -1;
}

void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    for (i = 0; i < 4; i++)
		if (level == levels[i])
            break ;
    switch (i)
    {
        case 0:
            if (level == levels[0])
                this->debug();
            break;
        case 1:
            if (level == levels[1])
                this->info();
            break;
        case 2:
            if (level == levels[2])
                this->warning();
            break;
        case 3:
            if (level == levels[3])
                this->error();
            break;
        default:
            break;
    }
}

void Harl::debug(void)
{
    if (this->level < 0)
        return ;
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    if (this->level < 1)
        return ;
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    if (this->level < 2)
        return ;
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    if (this->level < 3)
        return ;
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}