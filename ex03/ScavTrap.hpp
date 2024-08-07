/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:20:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 21:29:15 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_H
# define SCAVTRAP_H

# include "ClapTrap.hpp"

class	ScavTrap : virtual public ClapTrap
{
		public:

			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap &copy);
			ScavTrap &operator=(const ScavTrap &scavtrap);
			~ScavTrap();

			void	attack(const std::string& target);
			void	guardGate();
};

#endif