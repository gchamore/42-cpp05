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

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "ScavTrap.hpp"

class PresidentialPardonForm : public ClapTrap
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

	void highFivesGuys(void);
};

#endif