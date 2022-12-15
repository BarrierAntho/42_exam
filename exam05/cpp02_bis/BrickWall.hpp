/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:01:55 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:38:57 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ATarget.hpp"

class BrickWall: public ATarget
{
	public:
		BrickWall( void );
		~BrickWall( void );

		BrickWall	*clone( void ) const;

	private:
		BrickWall( BrickWall const & );
		BrickWall	&operator = ( BrickWall const & );
};
