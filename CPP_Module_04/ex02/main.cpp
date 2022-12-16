/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:27:23 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:14:14 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	Cat cat;
	Dog dog;
	Brain brain;

	std::cout << std::endl;
	std::cout << cat.getBrain()->getThought() << std::endl;
	cat.getBrain()->setThought("I am a cat");
	std::cout << cat.getBrain()->getThought() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << dog.getBrain()->getThought() << std::endl;
	dog.getBrain()->setThought("I am a dog");
	std::cout << dog.getBrain()->getThought() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << brain.getThought() << std::endl;
	brain.setThought("Who am i?");
	std::cout << brain.getThought() << std::endl;
	std::cout << std::endl;
}
