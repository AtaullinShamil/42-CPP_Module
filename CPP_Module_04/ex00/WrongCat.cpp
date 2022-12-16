/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:12 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:17:06 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = string("WrongCat");
	std::cout << "Constructor <WrongCat> called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <WrongCat> called" << std::endl;
}

WrongCat& WrongCat::operator= (const WrongCat &other) {
	this->type = other.getType();
	return(*this);
}

WrongCat::~WrongCat() {
	std::cout << "Destructor <WrongCat> called" << std::endl;
}

void	WrongCat::makeSound(void) const {
	std::cout << "The WrongCat says : meow" << std::endl;
}
