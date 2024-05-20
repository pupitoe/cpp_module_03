/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:31:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 14:52:55 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	
	DiamondTrap	tom_Xx = std::string("master kiwi krisounet");
	DiamondTrap	tom = std::string("soupa");
	DiamondTrap	flo("super gaitan");

	tom_Xx.attack("tom");
	tom_Xx.attack("tom");
	std::cout << tom_Xx.get_energy() << std::endl;
	tom_Xx.takeDomage(1);
	tom_Xx.beRepaired(1);
	std::cout << tom_Xx.get_energy() << std::endl;
	tom_Xx.whoAmI();

	flo.attack("kiwi");
	tom.attack("aa");
	DiamondTrap	popo = flo;	
	std::string buffer = "akira";
	
	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.takeDomage(55555555);
	tom.takeDomage(10);
	tom.takeDomage(10);
	std::cout << std::endl;
	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.beRepaired(100);
	std::cout << std::endl;
	for (int i = 0; i < 50; i++)
	{
		flo.attack(buffer);
		std::cout << "Flo energy left: " << flo.get_energy() << std::endl;
		buffer += tom.get_name()[i % tom.get_name().length()];
	}
	popo.attack("politocilo");
	popo.attack("gaitan");
	popo.beRepaired(10);
	popo.highFivesGuys();
	popo.guardGate();
	popo.takeDomage(100000000);

	DiamondTrap	doria("do");

	doria = flo;
	std::cout << doria.get_name() << std::endl;

	return (0);
}
