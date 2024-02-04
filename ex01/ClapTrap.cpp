/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:45:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/04 14:32:05 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _health(100), _energy(50), _attack(20)
{
	std::cout << "Claptrap " << _name << " Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(100), _energy(50), _attack(20)
{
	std::cout << "Claptrap " << _name << " Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _health(copy._health), _energy(copy._energy), _attack(copy._attack)
{
	std::cout << "Copy Claptrap Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
		_name = claptrap._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Claptrap " << _name << " destroyed" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0 && _health > 0)
	{
		ClapTrap tar(target);
		std::cout << "ClapTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
		tar.takeDamage(_attack);
		_energy -= 1;
	}
	else
		std::cout << "ClapTrap " << _name << " is Tired or Death" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "ClapTrap " << _name << " lost " << amount;
	std::cout << " hit points, now have " << _health << " hit points!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _health > 0)
	{
		_health += amount;
	std::cout << "ClapTrap " << _name << " repaired " << amount;
	std::cout << " hit points, now have " << _health << " hit points!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is Tired or Death" << std::endl;
}