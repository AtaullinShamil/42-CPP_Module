/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 02:09:48 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 01:00:55 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon){
	this->name = name;
	this->weapon_type = weapon.getType();
}

void HumanA::attack(void){
	std::cout << name << " attacks with their " << weapon_type  << std::endl;
}
