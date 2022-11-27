/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:41:23 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/28 01:13:27 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *zomb = new Zombie[N];

	for(int i = 0; i < N; i++)
		zomb[i].set_name(name);
	return (zomb);
}
