/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 22:01:59 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 13:39:30 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class	FragTrap: virtual public ClapTrap
{
	protected:
		static const int	__vhit_points = 100;
		static const int	__venergy_points = 100;
		static const int	__vattack_domage = 30;

	public:
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( FragTrap const& cpy );
		FragTrap&	operator=( FragTrap const& cpy );

		void	attack( const std::string& target );
		void	highFivesGuys(void);
};

#endif
