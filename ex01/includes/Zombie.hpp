/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 21:05:48 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/01 21:57:00 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
	private:
		std::string	name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
