/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:59:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:25:03 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh( void ): ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh( void ) {}

Fwoosh	*Fwoosh::clone( void ) const
{
	return (new Fwoosh());
}
