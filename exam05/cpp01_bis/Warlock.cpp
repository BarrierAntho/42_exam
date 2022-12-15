/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:24:19 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:31:44 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock( std::string const &name, std::string const &title ): name_(name), title_(title)
{
	std::cout << this->name_ << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
	std::map<std::string, ASpell *>::iterator	it;

	for (it = this->spells_.begin(); it != this->spells_.end(); it++)
	{
		if (it->second != NULL)
			delete (it->second);
	}
	this->spells_.clear();
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
	this->spells_.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell( std::string const &spellName )
{
//	std::map<std::string, ASpell *>::iterator	it;
//	
//	it = this->spells_.find(spellName);
//	if (it == this->spells_.end())
//		return ;
//	if (it->second != NULL)
//		delete (it->second);
//	this->spells_.erase(it);

	ASpell	*spell = this->spells_[spellName];
	if (spell == NULL)
		return ;
	else
		delete (spell);
	this->spells_.erase(spellName);
}

void	Warlock::launchSpell( std::string const &spellName, ATarget const &ref )
{
	ASpell	*spell = this->spells_[spellName];
	if (spell == NULL)
		return ;
	spell->launch(ref);
}
