/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:57:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:37:48 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ASpell.hpp"

class Polymorph: public ASpell
{
	public:
		Polymorph( void );
		~Polymorph( void );

		Polymorph	*clone( void ) const;

	private:
		Polymorph( Polymorph const & );
		Polymorph	&operator = ( Polymorph const & );
};
