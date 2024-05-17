/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:30:23 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/17 14:24:51 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_domage;
		bool			print_no_point( void ) const;

	public:
		ClapTrap( std::string const name );
		ClapTrap( ClapTrap const& cpy);
		ClapTrap&	operator=(ClapTrap const &cpy);
		~ClapTrap( void );
		
		void	attack(const std::string& target);
		void	takeDomage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		get_name( void ) const;
		unsigned int	get_hit( void ) const;
		unsigned int	get_energy( void ) const;
		unsigned int	get_attack( void ) const;
};

#endif
