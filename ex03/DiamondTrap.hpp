/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:06:31 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 14:38:57 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap( std::string name );
		~DiamondTrap( void );
		DiamondTrap( DiamondTrap const& cpy );
		DiamondTrap&	operator=( DiamondTrap const& cpy );

		using ScavTrap::attack;
		void	whoAmI( void );
};

#endif
