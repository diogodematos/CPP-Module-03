/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:20:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/04 15:14:36 by dcarrilh         ###   ########.fr       */
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
		_name = scavtrap._name;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << _name << " Destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_energy > 0 && _health > 0)
	{
		ScavTrap tar(target);
		std::cout << "ScavTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
		tar.takeDamage(_attack);
		_energy -= 1;
	}
	else
		std::cout << "ScavTrap " << _name << " is Tired or Death" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ScavTrap " << _name << " lost " << amount;
	std::cout << " hit points, now have " << _health << " hit points!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "Scavtrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}