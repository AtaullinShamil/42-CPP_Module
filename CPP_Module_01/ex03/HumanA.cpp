/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 02:09:48 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 02:02:28 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	name(name), weapon(weapon){
}

void HumanA::attack(void) const{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
