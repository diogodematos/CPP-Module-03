/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:29:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/07/29 16:11:02 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_name = "Default";
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap Default Created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_health = 100;
	_energy = 100;
	_attack = 30;
	std::cout << "FragTrap " << _name << " Created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	_name = copy._name;
		std::cout << "Copy FragTrap " << _name << " Created" << std::endl;
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
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " give High Fives to everyone!" << std::endl;
}