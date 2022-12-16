/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:27:17 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:21:13 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal& Animal::operator= (const Animal &other) {
	this->type = other.getType();
	return(*this);
}

Animal::~Animal() {
	std::cout << "Destructor <Animal> called" << std::endl;
}

string	Animal::getType (void) const {
	return (this->type);
}



