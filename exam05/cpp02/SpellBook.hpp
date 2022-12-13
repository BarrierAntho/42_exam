/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:39:52 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 17:13:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"

class ASpell;

class SpellBook
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		SpellBook( void );
		~SpellBook( void );

		// FUNCTIONS
		void	learnSpell( ASpell const * );
		void	forgetSpell( std::string const & );
		ASpell	*createSpell( std::string const & );

	private:
		std::map<std::string, ASpell *>	spellList;
};

#endif
