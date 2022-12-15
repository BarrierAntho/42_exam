/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:40:17 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:24:07 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell( std::string const &name, std::string const &effects): name_(name), effects_(effects) {}

ASpell::~ASpell( void ) {}

std::string const	ASpell::getName( void ) const
{
	return (this->name_);
}

std::string const	ASpell::getEffects( void ) const
{
	return (this->effects_);
}

void	ASpell::launch( ATarget const &ref ) const
{
	(&ref)->getHitBySpell(*this);
}
