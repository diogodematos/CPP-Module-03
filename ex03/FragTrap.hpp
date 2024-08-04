/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:18:02 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 21:29:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap	: virtual public ClapTrap
{
	public:
			FragTrap();
			FragTrap(std::string name);
			FragTrap(const FragTrap &copy);
			FragTrap &operator=(const FragTrap &FragTrap);
			~FragTrap();

			void highFivesGuys(void);
};

#endif

