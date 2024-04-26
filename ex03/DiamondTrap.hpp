/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:17:05 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/04/26 17:00:16 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        
        std::string name;

    public:

        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap &operator=(const DiamondTrap &diamondtrap);
        ~DiamondTrap();

        void whoAmI();
};

#endif