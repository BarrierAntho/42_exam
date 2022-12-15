/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:24:19 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 12:00:46 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const &name, std::string const &title ): name_(name), title_(title)
{
	std::cout << this->name_ << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
	std::cout << this->name_ << ": My job here is done!" << std::endl;
}

std::string const	Warlock::getName( void ) const
{
	return (this->name_);
}

std::string const	Warlock::getTitle( void ) const
{
	return (this->title_);
}

void	Warlock::setTitle ( std::string const &title )
{
	this->title_ = title;
}

void	Warlock::introduce( void ) const
{
	std::cout << this->name_ << ": I am " << this->name_ << ", " << this->title_ << "!" << std::endl;
}

void	Warlock::learnSpell( ASpell const *spell )
{
	if (spell == NULL)
		return ;
	this->spellBook.learnSpell(spell);
}

void	Warlock::forgetSpell( std::string const &spellName )
{
	this->spellBook.forgetSpell(spellName);
}

void	Warlock::launchSpell( std::string const &spellName, ATarget const &ref )
{
	ASpell	*spell = this->spellBook.createSpell(spellName);
	if (spell == NULL)
		return ;
	spell->launch(ref);
}
