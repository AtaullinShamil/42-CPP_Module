/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:08 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:04:13 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = string("WrongAnimal");
	std::cout << "Constructor <WrongAnimal> called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <WrongAnimal> called" << std::endl;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &other) {
	this->type = other.getType();
	return(*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "Destructor <WrongAnimal> called" << std::endl;
}

string	WrongAnimal::getType (void) const {
	return (this->type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "... WrongAnimal sound ..." << std::endl;
}
