/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:02:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 12:01:26 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall( void ): ATarget("Inconspicuous Red-brick Wall") {}

BrickWall::~BrickWall( void ) {}

BrickWall	*BrickWall::clone( void ) const
{
	return (new BrickWall());
}
