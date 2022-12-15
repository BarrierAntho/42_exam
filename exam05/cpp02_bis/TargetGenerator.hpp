/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:39:40 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:58:55 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class ASpell;
class ATarget;

class TargetGenerator
{
	public:
		TargetGenerator( void );
		~TargetGenerator( void );

		void	learnTargetType( ATarget * );
		void	forgetTargetType( std::string const & );
		ATarget	*createTarget( std::string const & );

	private:
		TargetGenerator( TargetGenerator const & );
		TargetGenerator	&operator = ( TargetGenerator const & );

		std::map<std::string, ATarget *>	targets_;
};
