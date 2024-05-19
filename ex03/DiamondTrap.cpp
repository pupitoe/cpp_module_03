/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:06:14 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/19 20:35:42 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ): ClapTrap(name),
	ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	//std::cout << ScavTrap::_ << std::endl;
	//this->_attack_domage = 0;
	//this->FragTrap::_attack_domage = 0;
	//this->ScavTrap::_attack_domage = 0;
	//this->ClapTrap::_attack_domage = 0;
	//this->DiamondTrap::_attack_domage = 0;
	//this->_attack_domage = 0;
	//this->_attack_domage = 0;
	//this->_attack_domage = 0;

	this->ClapTrap::_energy_points = 10;
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
	(void)cpy;
	return (*this);
}
