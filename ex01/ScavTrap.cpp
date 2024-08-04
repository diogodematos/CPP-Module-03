/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 14:20:14 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 21:24:42 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() 
{
	_name = "Default";
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap Deafult Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_health = 100;
	_energy = 50;
	_attack = 20;
	std::cout << "ScavTrap " << _name << " Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attack = copy._attack;
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
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
	std::cout << "ScavTrap Operation Copy Constructor Called" << std::endl;
	return *this;
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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " Destructor Called" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
}