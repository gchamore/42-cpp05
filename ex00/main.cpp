/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchamore <gchamore@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:42:27 by gchamore          #+#    #+#             */
/*   Updated: 2024/10/21 15:09:13 by gchamore         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		std::cout << "\033[34mConstruct\033[0m" << std::endl;
		ClapTrap a;
		ClapTrap b("Greg");

		std::cout << "\033[34mTest\033[0m" << std::endl;
		a.attack("other robot");
		a.takeDamage(5);
		a.beRepaired(5);
		a.takeDamage(11);
		a.takeDamage(10);
		a.beRepaired(5);
		a.attack("other other robot");
		b.beRepaired(3);
		for (int i = 0; i < 11; i++)
			b.attack("Greg's clone");
		b.beRepaired(3);
		std::cout << "\033[34mDeconstruct\033[0m" << std::endl;
	}
	return (0);
}