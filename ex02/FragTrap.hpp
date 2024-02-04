/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:18:02 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/04 15:51:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap	: public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &FragTrap);
			~FragTrap();

			void	attack(const std::string& target);
			void	takeDamage(unsigned int amount);
			void highFivesGuys(void);
};

#endif

