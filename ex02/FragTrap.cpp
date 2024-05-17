/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 14:10:40 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 14:27:07 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ): ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->set_hit(100);
	this->set_energy(100);
	this->set_attack(30);
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
	(void)cpy;
	return *this;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->print_no_point())
	{
		this->set_energy(this->get_energy() - 1);
		std::cout << "FragTrap " << this->get_name()
			<< " attacks with \"element de l'infini\" " << target
			<< ", causing " << this->get_attack() << " points of domage"
			<< std::endl;
	}
	return ;
}

void	FragTrap::highFivesGuys( void )
{
	if (this->print_no_point())
	{
		std::cout << "A positif high fives from " << this->get_name()
			<< " to you"<< std::endl;
	}
	return ;
}
