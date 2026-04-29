/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:06:24 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/24 17:54:49 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(10, "Zomboss");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}
