/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:56:43 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:59:18 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy( void ): ATarget("Target Practice Dummy")
{
}

Dummy::~Dummy( void )
{
}

Dummy	*Dummy::clone( void ) const
{
	return (new Dummy());
}
