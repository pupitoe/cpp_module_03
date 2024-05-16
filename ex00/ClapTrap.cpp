/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:30:28 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/16 19:21:39 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string const name ): _name(name)
{
	std::cout << "Default constructor called" << std::endl;
	this->_attack_domage = 0;
	this->_energy_points = 10;
	this->_hit_points = 10;
	return ;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const &cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& cpy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = cpy.get_name();
	this->_attack_domage = cpy.get_attack();
	this->_energy_points = cpy.get_energy();
	this->_hit_points = cpy.get_hit();
	return (*this);
}

std::string	ClapTrap::get_name( void ) const
{
	return (this->_name);
}

unsigned int	ClapTrap::get_attack( void ) const
{
	return (this->_attack_domage);
}

unsigned int	ClapTrap::get_energy( void ) const
{
	return (this->_energy_points);
}

unsigned int	ClapTrap::get_hit( void ) const
{
	return (this->_hit_points);
}

void	ClapTrap::attack(const std::string& target)
{
	(void)target;
	return ;
}

void	ClapTrap::takeDomage(unsigned int amount)
{
	(void)amount;
	return ;
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
	return ;
}
