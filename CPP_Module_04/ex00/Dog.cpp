/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:01 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/12 15:54:14 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = string("Dog");
	std::cout << "Constructor <Dog> called" << std::endl;
}

Dog::Dog(const Dog &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <Dog> called" << std::endl;
}

Dog& Dog::operator= (const Dog &other) {
	this->type = other.getType();
	return(*this);
}

Dog::~Dog() {
	std::cout << "Destructor <Dog> called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "The dog says : woof-wooof" << std::endl;
}
