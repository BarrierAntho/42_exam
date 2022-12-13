/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:00:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 17:18:41 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"
# include "SpellBook.hpp"

class ASpell;
class ATarget;
class SpellBook;

class Warlock
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		Warlock( std::string const &, std::string const & );
		~Warlock( void );

		// GETTER / SETTER
		std::string const	&getName( void ) const;
		std::string const	&getTitle( void ) const;
		void			setTitle( std::string const & );

		// FUNCTIONS
		void	introduce( void ) const;
		void	learnSpell( ASpell const * );
		void	forgetSpell( std::string const & );
		void	launchSpell( std::string const &, ATarget const & );

	private:
		std::string	name;
		std::string	title;
		SpellBook	spellBook;
};

#endif
