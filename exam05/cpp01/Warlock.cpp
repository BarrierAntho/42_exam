/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:04:25 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 14:18:05 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const &newName, std::string const &newTitle): name(newName), title(newTitle)
{
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const	&Warlock::getName( void ) const
{
	return (this->name);
}

std::string const	&Warlock::getTitle( void ) const
{
	return (this->title);
}

void	Warlock::setTitle( std::string const &newTitle )
{
	this->title = newTitle;
}

void	Warlock::introduce( void ) const
{
	std::cout << this->name << ": I am " << this->name << ", "<< this->title << "!" << std::endl;
}
