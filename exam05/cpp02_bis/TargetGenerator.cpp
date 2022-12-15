/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abarrier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:42:10 by abarrier          #+#    #+#             */
/*   Updated: 2022/12/15 12:05:36 by abarrier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void ) {}

TargetGenerator::~TargetGenerator( void )
{
	std::map<std::string, ATarget *>::iterator	it;

	for (it = this->targets_.begin(); it != this->targets_.end(); it++)
	{
		if (it->second != NULL)
			delete (it->second);
	}
	this->targets_.clear();
}

void	TargetGenerator::learnTargetType( ATarget *target )
{
	if (target == NULL)
		return ;
	this->targets_.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType( std::string const &targetName )
{
//	std::map<std::string, ASpell *>::iterator	it;
//	
//	it = this->targets_.find(targetName);
//	if (it == this->targets_.end())
//		return ;
//	if (it->second != NULL)
//		delete (it->second);
//	this->targets_.erase(it);

	ATarget	*target = this->targets_[targetName];
	if (target == NULL)
		return ;
	else
		delete (target);
	this->targets_.erase(targetName);
}

ATarget	*TargetGenerator::createTarget( std::string const &targetName )
{
	ATarget	*target = this->targets_[targetName];

	if (target == NULL)
		return (NULL);
	return (target);
}
