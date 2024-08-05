/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:45:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 14:51:37 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _health(100), _energy(50), _attack(20)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(100), _energy(50), _attack(20)
{
	std::cout << "ClapTrap " << _name << " Constructor Called" << std::endl;
	std::cout << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
	{
		_name = claptrap._name;
		_health = claptrap._health;
		_energy = claptrap._energy;
		_attack = claptrap._attack;
	}
	std::cout << "ClapTrap Operation Copy Constructor Called" << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << std::endl;
	std::cout << "Claptrap " << _name << " Destructor Called" << std::endl;
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
		std::cout << "Now have " << _energy << " points of energy!" << std::endl;
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
		_energy -= 1;
		std::cout << "Now have " << _energy << " points of energy!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " is Tired or Death" << std::endl;
}