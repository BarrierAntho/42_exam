/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:49:54 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:38:01 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph( void ): ASpell("Polymorph", "turned into a critter")
{
}

Polymorph::~Polymorph( void )
{
}

Polymorph	*Polymorph::clone( void ) const
{
	return (new Polymorph());
}
