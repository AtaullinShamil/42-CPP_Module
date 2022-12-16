/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:18 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:17:14 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() {
	this->type = string("WrongDog");
	std::cout << "Constructor <WrongDog> called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <WrongDog> called" << std::endl;
}

WrongDog& WrongDog::operator= (const WrongDog &other) {
	this->type = other.getType();
	return(*this);
}

WrongDog::~WrongDog() {
	std::cout << "Destructor <WrongDog> called" << std::endl;
}

void	WrongDog::makeSound(void) const {
	std::cout << "The WrongDog says : woof-wooof" << std::endl;
}
