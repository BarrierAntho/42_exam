/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:39:40 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:44:31 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class SpellBook
{
	public:
		SpellBook( void );
		~SpellBook( void );

		void	learnSpell( ASpell const * );
		void	forgetSpell( std::string const & );
		ASpell	*createSpell( std::string const & );

	private:
		SpellBook( SpellBook const & );
		SpellBook	&operator = ( SpellBook const & );

		std::map<std::string, ASpell *>	spells_;
};
