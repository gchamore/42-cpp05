/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:42:27 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/21 15:10:17 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	// std::cout << "---------------TEST CLAPTRAP---------------\n"
	// 		  << std::endl;
	// {
	// 	std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// 	ClapTrap a;
	// 	ClapTrap b("Cody");
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	a.attack("some other robot");
	// 	a.takeDamage(10);
	// 	a.takeDamage(10);
	// 	a.beRepaired(5);
	// 	a.attack("some other other robot");
	// 	b.beRepaired(3);
	// 	for (int i = 0; i < 12; i++)
	// 		b.attack("Cody-clone");
	// 	b.beRepaired(3);
	// 	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// }
	// std::cout << "\n\n---------------TEST SCAVTRAP---------------\n"
	// 		  << std::endl;
	// {
	// 	std::cout << "\033[34mConstruct\033[0m" << std::endl;
	// 	ScavTrap c;
	// 	ScavTrap d("Greg");
	// 	std::cout << "\033[34mTesting\033[0m" << std::endl;
	// 	c.attack("CloneTrap");
	// 	// for (int i = 0; i < 50; i++)
	// 	//         c.attack("CloneTrap");
	// 	c.beRepaired(22);
	// 	c.takeDamage(21);
	// 	c.beRepaired(22);
	// 	c.guardGate();
	// 	c.guardGate();
	// 	d.attack("Greg's clone");
	// 	d.takeDamage(90);
	// 	d.beRepaired(99);
	// 	d.beRepaired(90);
	// 	d.takeDamage(101);
	// 	d.takeDamage(15);
	// 	d.attack("Greg'g clone");
	// 	std::cout << "\033[34mDeconstruct\033[0m" << std::endl;
	// }
	std::cout << "\n\n---------------TEST FRAGTRAP---------------\n"
			  << std::endl;
	{
		std::cout << "\033[34mConstruct\033[0m" << std::endl;
		FragTrap c;
		FragTrap d("Greg");
		std::cout << "\033[34mTesting\033[0m" << std::endl;
		c.attack("CloneTrap");
		// for (int i = 0; i < 102; i++)
		//         c.attack("CloneTrap");
		c.beRepaired(22);
		c.takeDamage(21);
		c.beRepaired(22);
		c.highFivesGuys();
		d.attack("Greg's clone");
		d.takeDamage(90);
		d.beRepaired(99);
		d.beRepaired(90);
		d.takeDamage(101);
		d.takeDamage(15);
		d.highFivesGuys();
		d.attack("Greg'g clone");
		std::cout << "\033[34mDeconstruct\033[0m" << std::endl;
	}
	return (0);
}