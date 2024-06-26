/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:30:23 by tlassere          #+#    #+#             */
/*   Updated: 2024/05/20 13:41:12 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class	ClapTrap
{
	protected:
		bool			print_no_point( void ) const;
		std::string		_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_domage;

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
		
		void			set_hit( unsigned int val );
		void			set_energy( unsigned int val );
		void			set_attack( unsigned int val );
		
};

#endif
