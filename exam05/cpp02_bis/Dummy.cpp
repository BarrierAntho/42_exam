/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:02:44 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:25:22 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ): ATarget("Target Practice Dummy") {}

Dummy::~Dummy( void ) {}

Dummy	*Dummy::clone( void ) const
{
	return (new Dummy());
}
