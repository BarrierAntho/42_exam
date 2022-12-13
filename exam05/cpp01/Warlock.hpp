/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:00:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:16:38 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

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

	private:
		std::string	name;
		std::string	title;
};

#endif
