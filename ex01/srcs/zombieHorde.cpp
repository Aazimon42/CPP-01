/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:46:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/29 15:45:55 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde;

	if (N < 1 || N > 200)
	{
		std::cout << "can't create " << N << " zombies" << std::endl;
		return (NULL);
	}
	horde = new Zombie[N];
	std::cout << "creation of " << N << " zombies named " << name << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
