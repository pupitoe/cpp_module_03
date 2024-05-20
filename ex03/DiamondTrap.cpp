/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:06:14 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 13:46:04 by tlassere         ###   ########.fr       */
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
