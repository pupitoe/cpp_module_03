/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:06:31 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 18:39:10 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	__name;

	protected:
		using FragTrap::_attack_domage;
		using ScavTrap::_attack_domage;
		using FragTrap::_hit_points;
		using ScavTrap::_energy_points;
		using ScavTrap::_name;

	public:
		DiamondTrap( std::string name );
		~DiamondTrap( void );
		DiamondTrap( DiamondTrap const& cpy );
		DiamondTrap&	operator=( DiamondTrap const& cpy );

		using ScavTrap::attack;
		using ClapTrap::get_attack;
		using ClapTrap::get_name;
		using ClapTrap::get_energy;
		using ClapTrap::get_hit;
		using ClapTrap::takeDomage;
		using ClapTrap::beRepaired;
		
};

#endif
