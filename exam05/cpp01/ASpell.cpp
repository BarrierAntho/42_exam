/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:27:12 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:44:33 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( std::string const &newName, std::string const &newEffects): name(newName), effects(newEffects)
{
}

ASpell::~ASpell( void )
{
}

std::string const	&ASpell::getName( void ) const
{
	return (this->name);
}

std::string const	&ASpell::getEffects( void ) const
{
	return (this->effects);
}

void	ASpell::launch( ATarget const &ref ) const
{
	(&ref)->getHitBySpell(*this);
}
