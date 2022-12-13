/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:24:20 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:45:06 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell
{
	public:
		// CONSTRUCTOR / DESTRUCTOR
		ASpell( std::string const &, std::string const & );
		virtual ~ASpell( void ) = 0;

		// GETTER / SETTER
		std::string const	&getName( void ) const;
		std::string const	&getEffects( void ) const;

		// FUNCTIONS
		virtual ASpell	*clone( void ) const = 0;
		void	launch( ATarget const & ) const;

	private:
		std::string	name;
		std::string	effects;
};

#endif
