/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:42:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 11:47:21 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook( void ) {}

SpellBook::~SpellBook( void )
{
	std::map<std::string, ASpell *>::iterator	it;

	for (it = this->spells_.begin(); it != this->spells_.end(); it++)
	{
		if (it->second != NULL)
			delete (it->second);
	}
	this->spells_.clear();
}

void	SpellBook::learnSpell( ASpell const *spell )
{
	if (spell == NULL)
		return ;
	this->spells_.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell( std::string const &spellName )
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

ASpell	*SpellBook::createSpell( std::string const &spellName )
{
	ASpell	*spell = this->spells_[spellName];

	if (spell == NULL)
		return (NULL);
	return (spell);
}
