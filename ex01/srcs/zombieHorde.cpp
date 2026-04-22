/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:46:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/22 19:11:00 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*horde = new Zombie[N];

	std::cout << "creation of " << N << " zombies named " << name << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}
