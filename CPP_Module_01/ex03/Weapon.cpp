/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 02:09:04 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 01:03:06 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon():
	type("")
{
}

Weapon::Weapon(std::string const &type):
	type(type)
{
}

void Weapon::setType(std::string const &type){
	this->type = type;
}

std::string const &Weapon::getType(void) const{
	return (this->type);
}
