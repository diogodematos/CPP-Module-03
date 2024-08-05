/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:27:59 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 14:59:24 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    _name = "Default";
    ClapTrap::_name = "Default_clap_name";
    _health = 100;
    _energy = 50;
    _attack = 30;
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
    ClapTrap::_name = name + "_clap_name";
    _name = name;
    _health = 100;
    _energy = 50;
    _attack = 30;
    std::cout << "DiamondTrap " << _name << " Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attack = copy._attack;
	std::cout << "Copy DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	if (this != &diamondtrap)
	{
		_name = diamondtrap._name;
		_health = diamondtrap._health;
		_energy = diamondtrap._energy;
		_attack = diamondtrap._attack;
	}
    std::cout << "DiamondTrap Operation Copy Constructor Called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " Destructor Called" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << "!\nMy Clap name is "<< ClapTrap::_name << "!" << std::endl;
}
