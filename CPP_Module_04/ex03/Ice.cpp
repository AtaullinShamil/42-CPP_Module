/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:16 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:51:17 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice():
	AMateria("ice") {
}

Ice::Ice(Ice const &other):
	AMateria("ice") {
	this->type = other.getType();
}

Ice::~Ice() {
}

Ice &Ice::operator=(Ice const &other) {
	this->type = other.getType();
	return (*this);
}

AMateria *Ice::clone(void) const {
	Ice *cpy = new Ice(*this);
	return (cpy);
}

void Ice::use(ICharacter &target) {
	std::cout << "*  shoots an  " << this->type
		<< "bolt at" << target.getName() << std::endl;
}
