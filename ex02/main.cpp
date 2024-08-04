/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 20:53:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ScavTrap Amadeus("Amadeus");
	FragTrap Alfredo("Alfredo");
	Amadeus.attack("Tobias");
	Alfredo.attack("Lolita");
	Alfredo.beRepaired(50);
	Alfredo.highFivesGuys();

	std::cout << std::endl;

	FragTrap Jon(Alfredo);
	Jon.beRepaired(50);
	
	FragTrap Man;
	Man = Alfredo;
	Man.takeDamage(150);
	Man.attack("Lola");
}