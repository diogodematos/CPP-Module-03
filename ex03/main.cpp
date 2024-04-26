/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/04/26 17:33:40 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap Diamond("Tobias");
	DiamondTrap Boda;
	DiamondTrap Lolita(Boda);
	Boda = Diamond;
	Boda.attack("Jo");
	Lolita.attack("Jo");
	Lolita.whoAmI();
	Boda.whoAmI();
	
}