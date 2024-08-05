/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/05 14:52:11 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap Diamond("Tobias");
	std::cout << std::endl;
	Diamond.whoAmI();
	std::cout << std::endl;
	DiamondTrap Boda;
	std::cout << std::endl;
	DiamondTrap Lolita(Boda);
	std::cout << std::endl;
	Boda = Diamond;
	std::cout << std::endl;
	Boda.attack("Jo");
	std::cout << std::endl;
	Lolita.attack("Jo");
	std::cout << std::endl;
	Lolita.whoAmI();
	std::cout << std::endl;
	Boda.whoAmI();
	std::cout << std::endl;
	Diamond.whoAmI();
	std::cout << std::endl;

}