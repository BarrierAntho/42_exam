/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:38:50 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class BrickWall: public ATarget
{
	public:
		BrickWall( void );
		~BrickWall( void );
		BrickWall	*clone( void ) const;
};

#endif
