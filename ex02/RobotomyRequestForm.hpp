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

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "ClapTrap.hpp"

class RobotomyRequestForm : public ClapTrap
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string name);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

	void attack(const std::string &target);
	void guardGate();

private:
	bool _guardGateMode;
};

#endif