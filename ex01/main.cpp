/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/02/04 15:15:46 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap Tobias("Tobias");

	Tobias.attack("Alfredo");
	Tobias.attack("Alfredo");
	ScavTrap	Juliao("Juliao");
	Juliao = Tobias;
	Tobias.guardGate();
	Tobias.beRepaired(5);
	Tobias.beRepaired(5);
}