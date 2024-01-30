/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 15:45:21 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/01/30 17:05:14 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Cronstructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _health(10), _energy(10), _attack(0)
{
	std::cout << "Cronstructor with Name Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) : _name(copy._name), _health(copy._health), _energy(copy._energy), _attack(copy._attack)
{
	std::cout << "Copy Constructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	if (this != &claptrap)
		_name = claptrap._name;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor Called" << std::endl;
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
		std::cout << "ClapTrap is Tired or Death" << std::endl;
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
		std::cout << "ClapTrap is Tired or Death" << std::endl;
}