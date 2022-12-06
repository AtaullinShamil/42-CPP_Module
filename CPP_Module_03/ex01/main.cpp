/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:47:24 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 15:00:59 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap trap("Scav");

	trap.guardGate();
	trap.attack("Birdperson");
	trap.takeDamage(14);
	trap.beRepaired(2);
	return (0);
}
