/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:48:11 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:59:11 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class Fwoosh: public ASpell
{
	public:
		Fwoosh( void );
		~Fwoosh( void );
		Fwoosh	*clone( void ) const;

};

#endif
