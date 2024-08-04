/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcarrilh <dcarrilh@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:03:38 by dcarrilh          #+#    #+#             */
/*   Updated: 2024/08/04 18:22:44 by dcarrilh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap Jon;

	Jon.attack("Tobias");
	Jon.takeDamage(5);
	Jon.beRepaired(5);
	Jon.beRepaired(5);
	
	ClapTrap Lucas;
	Lucas = Jon;
	Lucas.beRepaired(5);

	ClapTrap Bar(Jon); 
	Bar.beRepaired(5);
}