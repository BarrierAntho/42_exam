/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:36:03 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 10:55:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		ASpell( std::string const &, std::string const & );
		virtual ~ASpell( void ) = 0;

		std::string const	getName( void ) const;
		std::string const	getEffects( void ) const;

		virtual ASpell	*clone( void ) const = 0;

		void	launch( ATarget const & ) const;

	private:
		ASpell( void );
		ASpell( ASpell const & );
		ASpell	&operator = ( ASpell const & );

		std::string	name_;
		std::string	effects_;
};
