/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:26:52 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:27:08 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap trap("Diamond");

	trap.whoAmI();
	trap.guardGate();
	trap.highFivesGuys();
	trap.attack("Ustal");
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}
