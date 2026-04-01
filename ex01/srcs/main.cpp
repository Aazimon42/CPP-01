/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:06:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 21:43:23 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*myZombie;

	std::cout << "First zombie (on the stack)" << std::endl;
	Zombie("Edgar");
	std::cout << "Second zombie (on the heap)" << std::endl;
	myZombie = newZombie("George");
	std::cout << "Destruction of the second zombie..." << std::endl;
	delete myZombie;
	std::cout << "Random chump (on the stack)" << std::endl;
	randomChump("Zomboss");
	return (0);
}
