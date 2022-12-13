/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:49:54 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:58:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ): ASpell("Fwoosh", "fwooshed")
{
}

Fwoosh::~Fwoosh( void )
{
}

Fwoosh	*Fwoosh::clone( void ) const
{
	return (new Fwoosh());
}
