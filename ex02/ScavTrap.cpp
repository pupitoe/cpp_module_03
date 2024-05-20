/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:01:46 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/16 22:45:02by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// : ClapTrap() is explisite constructor :)
ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->set_hit(100);
	this->set_energy(50);
	this->set_attack(20);
	return ;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const& cpy ): ClapTrap(cpy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;	
	*this = cpy;
	return ;
}

ScavTrap& ScavTrap::operator=( ScavTrap const& cpy)
{
	std::cout << "ScavTrap copy asignement constructor called" << std::endl;
	this->_name = cpy._name;
	this->_attack_domage = cpy._attack_domage;
	this->_energy_points = cpy._energy_points;
	this->_hit_points = cpy._hit_points;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->print_no_point())
	{
		this->set_energy(this->get_energy() - 1);
		std::cout << "ScavTrap " << this->get_name()
			<< " attacks with super DAB inside " << target
			<< ", causing " << this->get_attack() << " points of domage"
			<< std::endl;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->print_no_point())
		std::cout << this->_name << "is now in Gate Keeper mode" << std::endl;
	return ;
}
