/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:27:59 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 21:32:57 by dcarrilh         ###   ########.fr       */
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
    std::cout << "DiamondTrap Default Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
    _name = name;
    this->name = name + "_clap_name";
    _health = FragTrap::_health;
    _energy = ScavTrap::_energy;
    _attack = FragTrap::_attack;
    std::cout << "DiamondTrap " << _name << " Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
	_name = copy._name;
    name = copy.name;
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
        name = diamondtrap.name;
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
    std::cout << "My name is " << _name << "!\nMy Clap name is "<< name << "!" << std::endl;
}
