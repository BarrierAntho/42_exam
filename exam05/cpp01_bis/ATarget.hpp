/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:44:04 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 10:55:14 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	public:
		ATarget( std::string const & );
		virtual ~ATarget( void ) = 0;

		std::string const	getType( void ) const;

		virtual ATarget	*clone( void ) const = 0;

		void	getHitBySpell( ASpell const & ) const;

	private:
		ATarget( void );
		ATarget( ATarget const & );
		ATarget	&operator = ( ATarget const & );

		std::string	type_;
};
