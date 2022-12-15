/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:57:07 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:05:37 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ASpell.hpp"

class Fwoosh: public ASpell
{
	public:
		Fwoosh( void );
		~Fwoosh( void );

		Fwoosh	*clone( void ) const;

	private:
		Fwoosh( Fwoosh const & );
		Fwoosh	&operator = ( Fwoosh const & );
};
