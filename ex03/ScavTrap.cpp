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

ScavTrap::ScavTrap( std::string name ): ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = this->__vhit_points;
	this->_energy_points = this->__venergy_points;
	this->_attack_domage = this->_attack_domage;
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
	(void)cpy;
	return *this;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->print_no_point())
	{
		this->_energy_points -= 1;
		std::cout << "ScavTrap " << this->_name
			<< " attacks with super DAB inside " << target
			<< ", causing " << this->_attack_domage << " points of domage"
			<< std::endl;
	}
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->print_no_point())
		std::cout << "Is now in Gate Keeper mode" << std::endl;
	return ;
}
