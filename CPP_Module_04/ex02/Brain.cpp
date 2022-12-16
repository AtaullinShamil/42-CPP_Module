/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:40:36 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 12:57:07 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	for (size_t i = 0; i < 100; i++) {
		this->ideas[i] = string(THOUGHT);
	}
	std::cout << "Constructor <Brain> called" << std::endl;
}

Brain::Brain(string type) {
	for (size_t i = 0; i < 100; i++) {
		if (type == "Cat")
			this->ideas[i] = string(CAT_THOUGHT);
		else if (type == "Dog")
			this->ideas[i] = string(DOG_THOUGHT);
		else
			this->ideas[i] = string(THOUGHT);
	}
	std::cout << "Constructor <Brain> (" << type << ") called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Destructor <Brain> called" << std::endl;
}

Brain::Brain(const Brain &old) {
	for (size_t i = 0; i < 100; i++) {
		this->ideas[i] = old.ideas[i];
	}
		std::cout << "Assignment constructor <Brain> called" << std::endl;
}

Brain& Brain::operator= (const Brain &other) {
	for (size_t i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
		std::cout << "<Brain> cloned" << std::endl;
	return(*this);
}

const string	Brain::getThought(void) const {
	return (this->ideas[0]);
}

void		Brain::setThought(string const th) {
	this->ideas[0] = th;
}
