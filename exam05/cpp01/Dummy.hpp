/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:55:28 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:59:40 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class Dummy: public ATarget
{
	public:
		Dummy( void );
		~Dummy( void );
		Dummy	*clone( void ) const;
};

#endif
