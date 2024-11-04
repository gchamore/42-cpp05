/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 14:53:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : ClapTrap()
{
	std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "name =" << this->_name << " _hitPoints =" << this->_hitPoints << " _energyPoints =" << this->_energyPoints << " _attackDamage =" << this->_attackDamage << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) : ClapTrap(name)
{
	std::cout << "ShrubberyCreationForm constructor named called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "name =" << this->_name << " _hitPoints =" << this->_hitPoints << " _energyPoints =" << this->_energyPoints << " _attackDamage =" << this->_attackDamage << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : ClapTrap(other)
{
	std::cout << "ShrubberyCreationForm Copy Constructor called" << std::endl;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
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

void ShrubberyCreationForm::highFivesGuys(void)
{
	std::cout << "ShrubberyCreationForm is requesting a high five! ✋" << std::endl;
}