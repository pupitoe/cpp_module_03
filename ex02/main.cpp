/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:31:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 14:18:10 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	tom = std::string("super tom");
	FragTrap	flo("super gaitan");
	FragTrap	popo = flo;	
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
	for (int i = 0; i < 100; i++)
	{
		flo.attack(buffer);
		buffer += tom.get_name()[i % tom.get_name().length()];
	}
	popo.attack("politocilo");
	popo.attack("gaitan");
	popo.beRepaired(10);
	popo.takeDomage(100000000);
	return (0);
}
