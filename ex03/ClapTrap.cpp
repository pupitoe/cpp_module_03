/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:30:28 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 13:46:42 by tlassere         ###   ########.fr       */
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
	this->_name = cpy._name;
	this->_attack_domage = cpy._attack_domage;
	this->_energy_points = cpy._energy_points;
	this->_hit_points = cpy._hit_points;
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
	if (this->print_no_point())
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attack_domage << " points of domage"
			<< std::endl;
	}
	return ;
}

void	ClapTrap::takeDomage(unsigned int amount)
{
	if (this->_hit_points)
	{
		std::cout << this->_name << " has taken domage, going frome "
			<< this->_hit_points << " to ";
		if (amount > this->_hit_points)
			this->_hit_points = 0;
		else
			this->_hit_points -= amount;
		std::cout << this->_hit_points << std::endl;
		if (this->_hit_points == 0)
			std::cout << "You killed " << this->_name << std::endl;
	}
	else
		std::cout << "You're so cruel, you won't leave his corpse alone"
			<< std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->print_no_point())
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << this->_name << ": repaired of " << amount << "hps"
			<< std::endl;
	}
	return ;
}

bool	ClapTrap::print_no_point( void ) const
{
	bool	status;

	status = false;
	if (this->_hit_points == 0)
		std::cout << "OH NO " << this->_name << " is dead :(" << std::endl;
	else if (this->_energy_points == 0)
		std::cout << "OH NO " << this->_name << " do not have energy"
			<< std::endl;
	else
		status = true;
	return (status);
}

void	ClapTrap::set_attack( unsigned int val )
{
	this->_attack_domage = val;
	return ;
}

void	ClapTrap::set_energy ( unsigned int val )
{
	this->ClapTrap::_energy_points = val;
	return ;
}

void	ClapTrap::set_hit( unsigned int val )
{
	this->_hit_points = val;
	return ;
}
