/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:48:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 16:35:45 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class Fireball: public ASpell
{
	public:
		Fireball( void );
		~Fireball( void );
		Fireball	*clone( void ) const;

};

#endif
