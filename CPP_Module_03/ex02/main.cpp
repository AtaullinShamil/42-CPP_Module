/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:47:24 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 15:20:42 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap trap("Billy");

	trap.attack("Reality");
	trap.highFivesGuys();
	trap.takeDamage(5);
	trap.beRepaired(3);
	return (0);
}
