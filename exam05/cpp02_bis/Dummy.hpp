/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:01:55 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:05:08 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ATarget.hpp"

class Dummy: public ATarget
{
	public:
		Dummy( void );
		~Dummy( void );

		Dummy	*clone( void ) const;

	private:
		Dummy( Dummy const & );
		Dummy	&operator = ( Dummy const & );
};
