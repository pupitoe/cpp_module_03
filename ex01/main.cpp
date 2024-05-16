/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:31:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/16 23:27:32 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	tom = std::string("super tom");
	ScavTrap	flo("super gaitan");
	ScavTrap	tomixos = flo;	
	std::string buffer = "fabiiiiio";
	
	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.takeDomage(99);
	tom.takeDomage(10);
	tom.takeDomage(10);
	std::cout << std::endl;
	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.beRepaired(10);
	std::cout << std::endl;
	for (int i = 0; i < 50; i++)
	{
		flo.attack(buffer);
		buffer += tom.get_name()[i % tom.get_name().length()];
	}
	tomixos.attack("politocilo");
	tomixos.guardGate();
	return (0);
}
