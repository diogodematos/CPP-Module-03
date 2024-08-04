/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 20:21:19 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap Tobias;
	Tobias.attack("Alfredo");
	
	std::cout << std::endl;
	
	ScavTrap	Juliao("Juliao");
	Juliao.guardGate();
	Juliao.attack("Lucas");
	Juliao.beRepaired(5);

	std::cout << std::endl;

	
	ScavTrap Matias(Juliao);
	Matias.beRepaired(100);
	Matias = Juliao;
	Matias.beRepaired(100);
}