/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:20:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/12 15:38:57 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavtrap Deafult Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap " << _name << " Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "Copy Scavtrap Called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &scavtrap)
{
	if (this != &scavtrap)
	{
		_name = scavtrap._name;
		_health = scavtrap._health;
		_energy = scavtrap._energy;
		_attack = scavtrap._attack;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << _name << " Destroyed" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}