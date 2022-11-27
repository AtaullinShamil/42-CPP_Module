/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:13:47 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/28 00:54:45 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int horde_size = 10;
	Zombie *hord = zombieHorde(horde_size, "Billy");

	for (int i = 0; i < horde_size; i++)
		hord[i].announce();
	delete[] (hord);
	return (0);
}
