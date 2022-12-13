/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:31:58 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:50:56 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		// CONSTRUCTOR / DESTRUTOR
		ATarget( std::string const & );
		virtual ~ATarget( void ) = 0;

		// GETTER / SETTER
		std::string const	&getType( void ) const;

		// FUNCTIONS
		virtual ATarget	*clone( void ) const = 0;
		void	getHitBySpell( ASpell const & ) const;

	private:
		std::string	type;
};

#endif
