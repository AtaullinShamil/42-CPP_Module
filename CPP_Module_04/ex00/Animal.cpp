/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:27:17 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:19:40 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = string("Animal");
	std::cout << "Constructor <Animal> called" << std::endl;
}

Animal::Animal(const Animal &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <Animal> called" << std::endl;
}

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

void	Animal::makeSound(void) const {
	std::cout << "... Animal sound ..." << std::endl;
}


