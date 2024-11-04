/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 15:52:14 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/17 15:57:17 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "ScavTrap.hpp"

class ShrubberyCreationForm : public ClapTrap
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string name);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	void highFivesGuys(void);
};

#endif