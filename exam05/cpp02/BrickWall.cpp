/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:56:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:39:35 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ): ATarget("Inconspicuous Red-brick Wall")
{
}

BrickWall::~BrickWall( void )
{
}

BrickWall	*BrickWall::clone( void ) const
{
	return (new BrickWall());
}
