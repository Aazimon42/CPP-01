/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edi-maio <edi-maio@42angouleme.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/02 18:16:06 by edi-maio          #+#    #+#             */
/*   Updated: 2026/04/02 18:30:19 by edi-maio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
