/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:19 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:19:48 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = string("Cat");
	std::cout << "Constructor <Cat> called" << std::endl;
}

Cat::Cat(const Cat &old) {
	this->type = old.getType();
	std::cout << "Assignment constructor <Cat> called" << std::endl;
}

Cat& Cat::operator= (const Cat &other) {
	this->type = other.getType();
	return(*this);
}

Cat::~Cat() {
	std::cout << "Destructor <Cat> called" << std::endl;
}

void	Cat::makeSound(void) const {
	std::cout << "The Cat says : meow" << std::endl;
}
