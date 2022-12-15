/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:57:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:35:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ASpell.hpp"

class Fireball: public ASpell
{
	public:
		Fireball( void );
		~Fireball( void );

		Fireball	*clone( void ) const;

	private:
		Fireball( Fireball const & );
		Fireball	&operator = ( Fireball const & );
};
