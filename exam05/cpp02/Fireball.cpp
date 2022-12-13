/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:49:54 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:36:25 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball( void ): ASpell("Fireball", "burnt to a crisp")
{
}

Fireball::~Fireball( void )
{
}

Fireball	*Fireball::clone( void ) const
{
	return (new Fireball());
}
