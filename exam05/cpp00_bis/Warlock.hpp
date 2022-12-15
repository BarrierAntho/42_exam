/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:02:51 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 10:38:23 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <algorithm>
# include <iostream>

class Warlock
{
	public:
		Warlock( std::string const &, std::string const & );
		~Warlock( void );

		std::string const	getName( void ) const;
		std::string const	getTitle( void ) const;
		void	setTitle( std::string const & );

		void	introduce( void ) const;

	private:
		Warlock ( void );
		Warlock ( Warlock const & );
		Warlock	&operator = ( Warlock const & );

		// ATTRIBUTES
		std::string	name_;
		std::string	title_;
};
