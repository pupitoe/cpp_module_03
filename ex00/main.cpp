/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:31:33 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/16 21:54:22 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	tom = std::string("super tom");
	ClapTrap	flo("super gaitan");
	

	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.takeDomage(5);
	tom.takeDomage(10);
	tom.takeDomage(10);
	std::cout << std::endl;
	flo.attack(tom.get_name());
	std::cout << std::endl;
	tom.beRepaired(10);
	std::cout << std::endl;

	std::string buffer = "krissssss";
	for (int i = 0; i < 10; i++)
	{
		flo.attack(buffer);
		buffer += tom.get_name()[i % tom.get_name().length()];
	}
	return (0);
}
