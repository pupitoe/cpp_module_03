/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:10:40 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 15:48:01 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_hit_points = this->__vhit_points;
	this->_energy_points = this->__venergy_points;
	this->_attack_domage = this->_attack_domage;
	return ;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap( FragTrap const& cpy ): ClapTrap(cpy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;	
	*this = cpy;
	return ;
}

FragTrap& FragTrap::operator=( FragTrap const& cpy)
{
	std::cout << "FragTrap copy asignement constructor called" << std::endl;
	this->_name = cpy._name;
	this->_attack_domage = cpy._attack_domage;
	this->_energy_points = cpy._energy_points;
	this->_hit_points = cpy._hit_points;
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->print_no_point())
	{
		this->_energy_points -= 1;
		std::cout << "FragTrap " << this->_name
			<< " attacks with \"element de l'infini\" " << target
			<< ", causing " << this->_attack_domage << " points of domage"
			<< std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->print_no_point())
	{
		std::cout << "A positif high fives from " << this->_name
			<< " to you"<< std::endl;
	}
	return ;
}
