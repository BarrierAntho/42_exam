/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:46:06 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:24:43 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget( std::string const &type): type_(type) {}

ATarget::~ATarget( void ) {}

std::string const	ATarget::getType( void ) const
{
	return (this->type_);
}

void	ATarget::getHitBySpell( ASpell const &ref ) const
{
	std::cout << this->type_ << " has been " << (&ref)->getEffects() << "!" << std::endl;
}
