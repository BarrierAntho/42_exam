/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:45:19 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/13 17:19:59 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook( void )
{
}

SpellBook::~SpellBook( void )
{
	std::map<std::string, ASpell *>::iterator	it;
	for (it = this->spellList.begin(); it != this->spellList.end(); it++)
	{
		if (it->second != NULL)
			delete (it->second);
	}
	this->spellList.clear();
}

void	SpellBook::learnSpell( ASpell const *spell )
{
	if (spell != NULL)
		this->spellList.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell( std::string const &ref )
{
	std::map<std::string, ASpell *>::iterator	it = this->spellList.find(ref);

	if (it == this->spellList.end())
		return ;
	if (it->second != NULL)
		delete it->second;
	this->spellList.erase(ref);
}

ASpell	*SpellBook::createSpell( std::string const &ref )
{
	std::map<std::string, ASpell *>::iterator	it = this->spellList.find(ref);

	if (it == this->spellList.end() || it->second == NULL)
		return (NULL);
	return (it->second);
}
