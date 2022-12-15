/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:02:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:29:34 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class Warlock
{
	public:
		Warlock( std::string const &, std::string const & );
		~Warlock( void );

		std::string const	getName( void ) const;
		std::string const	getTitle( void ) const;
		void	setTitle( std::string const & );

		void	introduce( void ) const;

		void	learnSpell( ASpell const * );
		void	forgetSpell( std::string const & );
		void	launchSpell( std::string const &, ATarget const & );

	private:
		Warlock ( void );
		Warlock ( Warlock const & );
		Warlock	&operator = ( Warlock const & );

		// ATTRIBUTES
		std::string	name_;
		std::string	title_;
		std::map<std::string, ASpell *>	spells_;
};
