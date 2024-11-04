/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 14:53:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : ClapTrap()
{
	std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "name =" << this->_name << " _hitPoints =" << this->_hitPoints << " _energyPoints =" << this->_energyPoints << " _attackDamage =" << this->_attackDamage << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name) : ClapTrap(name)
{
	std::cout << "PresidentialPardonForm constructor named called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "name =" << this->_name << " _hitPoints =" << this->_hitPoints << " _energyPoints =" << this->_energyPoints << " _attackDamage =" << this->_attackDamage << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : ClapTrap(other)
{
	std::cout << "PresidentialPardonForm Copy Constructor called" << std::endl;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	std::cout << "Assignment operator called" << std::endl;
	return *this;
}

void PresidentialPardonForm::highFivesGuys(void)
{
	std::cout << "PresidentialPardonForm is requesting a high five! ✋" << std::endl;
}