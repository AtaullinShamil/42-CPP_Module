/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:19 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 12:55:01 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = string("Cat");
	this->brain = new Brain(this->type);
	std::cout << "Constructor <Cat> called" << std::endl;
}

Cat::Cat(const Cat &old) : Animal(old) {
	this->type = old.getType();
	this->brain = new Brain(*old.getBrain());
	std::cout << "Assignment constructor <Cat> called" << std::endl;
}

Cat& Cat::operator= (const Cat &other)
{
	std::cout << "Cat cloned" << std::endl;
	this->type = other.getType();
	this->brain = new Brain(*other.getBrain());
	return(*this);
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Destructor <Cat> called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "The Cat says : meow" << std::endl;
}

Brain	*Cat::getBrain(void) const {
	return (this->brain);
}
