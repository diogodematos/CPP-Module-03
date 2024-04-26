/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:27:59 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/04/26 17:34:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap()
{
    _name = "Default";
    name = "Default_clap_name";
    _health = FragTrap::_health;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap Default Created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    _name = name;
    this->name = name + "_clap_name";
    _health = FragTrap::_health;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap " << _name << " Created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	_name = copy._name;
    name = copy.name;
		std::cout << "Copy DiamondTrap " << _name << " Created" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
	if (this != &diamondtrap)
	{
		_name = diamondtrap._name;
        name = diamondtrap.name;
		_health = diamondtrap._health;
		_energy = diamondtrap._energy;
		_attack = diamondtrap._attack;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << _name << " Destroyed!" << std::endl;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << "!\nMy Clap name is "<< name << "!" << std::endl;
}