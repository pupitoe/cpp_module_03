/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:01:59 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 13:35:18 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVETRAP_HPP
# define SCAVETRAP_HPP

# include "ClapTrap.hpp"

// : public is heritence of ClapTrap
class	ScavTrap: virtual public ClapTrap
{
	protected:
		static const int	__vhit_points = 100;
		static const int	__venergy_points = 50;
		static const int	__vattack_domage = 20;

	public:
		ScavTrap( std::string name );
		~ScavTrap( void );
		ScavTrap( ScavTrap const& cpy );
		ScavTrap&	operator=( ScavTrap const& cpy );

		void	attack( const std::string& target );
		void	guardGate( void );
};

#endif
