/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:06:14 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 15:47:38 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name),
	ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_hit_points = this->FragTrap::__vhit_points;
	this->_energy_points = this->ScavTrap::__venergy_points;
	this->_attack_domage = this->FragTrap::__vattack_domage;
	this->DiamondTrap::_name = this->ClapTrap::_name;
	this->ClapTrap::_name += "_clap_name";
	return ;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const& cpy ): ClapTrap(cpy),
	ScavTrap(cpy), FragTrap(cpy)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

DiamondTrap&	DiamondTrap::operator=( DiamondTrap const& cpy)
{
	std::cout << "DiamondTrap copy asignement operator called" << std::endl;
	this->DiamondTrap::_name = cpy.DiamondTrap::_name;
	this->ClapTrap::_name = cpy.ClapTrap::_name;
	this->_attack_domage = cpy._attack_domage;
	this->_energy_points = cpy._energy_points;
	this->_hit_points = cpy._hit_points;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	if (this->print_no_point())
	{
		std::cout << "My name is \"" << this->DiamondTrap::_name
			<< "\" my ClapTrap name is \"" << this->ClapTrap::_name
			<< "\"" << std::endl;
	}
}
