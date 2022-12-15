/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:59:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:37:19 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph( void ): ASpell("Polymorph", "turned into a critter") {}

Polymorph::~Polymorph( void ) {}

Polymorph	*Polymorph::clone( void ) const
{
	return (new Polymorph());
}
