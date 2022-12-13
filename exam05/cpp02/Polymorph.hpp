/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:48:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:37:16 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POLYMORPH_HPP
# define POLYMORPH_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class Polymorph: public ASpell
{
	public:
		Polymorph( void );
		~Polymorph( void );
		Polymorph	*clone( void ) const;

};

#endif
