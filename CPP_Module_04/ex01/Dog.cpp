/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:01 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 12:53:04 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = string("Dog");
	this->brain = new Brain(this->type);
	std::cout << "Constructor <Dog> called" << std::endl;
}

Dog::Dog(const Dog &old) : Animal(old) {
	const Brain *br;

	std::cout << "Assignment constructor <Dog> called" << std::endl;
	br = old.getBrain();
	this->type = old.getType();
	this->brain = new Brain(*br);
}

Dog& Dog::operator= (const Dog &other) {
	const Brain *br;

	std::cout << "<Dog> caloned" << std::endl;
	this->type = other.getType();
	br = other.getBrain();
	this->brain = new Brain(*br);
	return(*this);
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Destructor <Dog> called" << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << "The Dog says : woof-wooof" << std::endl;
}

Brain	*Dog::getBrain(void) const {
	return (this->brain);
}
