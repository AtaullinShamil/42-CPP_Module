/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 02:10:12 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 04:55:44 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name){
	this->name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(const Weapon &weapon){
	this->weapon = &weapon;
}

void HumanB::attack(void) const{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " attacks with his hands because he has no Weapon !" << std::endl;
}
