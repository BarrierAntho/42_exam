/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:59:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:36:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball( void ): ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball( void ) {}

Fireball	*Fireball::clone( void ) const
{
	return (new Fireball());
}
