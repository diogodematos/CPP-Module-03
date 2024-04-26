/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/04/26 16:11:25 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap Tobias;

	Tobias.attack("Alfredo");
	Tobias.attack("Alfredo");
	Tobias.attack("Alfredo");
	ScavTrap	Juliao("Juliao");
	Juliao = Tobias;
	Tobias.guardGate();
	Tobias.beRepaired(5);
	Tobias.beRepaired(5);
}