/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:29:36 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/04 15:53:12 by dcarrilh         ###   ########.fr       */
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

FragTrap::FragTrap(const FragTrap &copy)
{
	_name = copy._name;
		std::cout << "Copy FragTrap " << _name << " Created" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
	if (this != &fragtrap)
		_name = fragtrap._name;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " Destroyed!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_energy > 0 && _health > 0)
	{
		FragTrap tar(target);
		std::cout << "FragTrap " << _name << " attacks " << target;
		std::cout << ", causing " << _attack << " points of damage!" << std::endl;
		tar.takeDamage(_attack);
		_energy -= 1;
	}
	else
		std::cout << "FragTrap " << _name << " is Tired or Death" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	_health -= amount;
	std::cout << "FragTrap " << _name << " lost " << amount;
	std::cout << " hit points, now have " << _health << " hit points!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " give High Fives to everyone!" << std::endl;
}