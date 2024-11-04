/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:40:48 by gchamore          #+#    #+#             */
/*   Updated: 2024/09/30 14:53:07 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : ClapTrap()
{
	std::cout << "Default ScravTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardGateMode = false;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name) : ClapTrap(name)
{
	std::cout << "ScravTrap constructor named called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_guardGateMode = false;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : ClapTrap(other)
{
	std::cout << "RobotomyRequestForm Copy Constructor called" << std::endl;
	this->_guardGateMode = other._guardGateMode;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "ScravTrap Destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
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

void RobotomyRequestForm::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "RobotomyRequestForm " << this->_name << " attacks " << target << ", with a huge " << this->_attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else if (this->_energyPoints == 0)
		std::cout << "\033[31mRobotomyRequestForm " << this->_name << " can't attack " << target << ", no energy points left.\033[0m" << std::endl;
	else
		std::cout << "\033[31mRobotomyRequestForm " << this->_name << " can't attack " << target << ", not enough hit points.\033[0m" << std::endl;
}

void RobotomyRequestForm::guardGate(void)
{
	if (this->_guardGateMode == false)
	{
		this->_guardGateMode = true;
		std::cout << "RobotomyRequestForm " << this->_name << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "\033[33mRobotomyRequestForm " << this->_name << " is already guarding the gate.\033[0m" << std::endl;
}