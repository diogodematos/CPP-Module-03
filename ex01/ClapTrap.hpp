/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:36:37 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/30 17:16:44 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include	<iostream>
# include <string>

class	ClapTrap
{
	protected:

		std::string	_name;
		int _health;
		int	_energy;
		int	_attack;	
		
	public:

		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &claptrap);
		~ClapTrap();
		
		void	attack(ClapTrap target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif