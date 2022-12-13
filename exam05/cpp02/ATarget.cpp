/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:33:18 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:46:48 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget( std::string const &newType): type(newType)
{
}

ATarget::~ATarget( void )
{
}

std::string const	&ATarget::getType( void ) const
{
	return (this->type);
}

void	ATarget::getHitBySpell( ASpell const &ref ) const
{
	std::cout << this->type << " has been " << (&ref)->getEffects() << "!" << std::endl;
}
