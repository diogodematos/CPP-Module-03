/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:29:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 20:54:08 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "Default";
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap Default Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	_name = copy._name;
	_health = copy._health;
	_energy = copy._energy;
	_attack = copy._attack;
	std::cout << "Copy FragTrap Constructor Called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
	{
		_name = fragtrap._name;
		_health = fragtrap._health;
		_energy = fragtrap._energy;
		_attack = fragtrap._attack;
	}
	std::cout << "FragTrap Operation Copy Constructor Called" << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destructor Called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " give High Fives to everyone!" << std::endl;
}