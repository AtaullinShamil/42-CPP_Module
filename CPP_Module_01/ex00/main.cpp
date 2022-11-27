/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:26:36 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/27 17:09:21 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie	*zombie_1 = new Zombie("Pinky");
	Zombie	*zombie_2 = newZombie("Brain");

	randomChump("Russell Crowe");
	zombie_1->announce();
	zombie_2->announce();
	delete(zombie_1);
	delete(zombie_2);
	return (0);
}
