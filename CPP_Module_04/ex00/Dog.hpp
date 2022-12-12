/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:08 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/12 15:49:14 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

using std::string;

class Dog : public Animal {
	public:
		Dog();
		Dog(Dog const &old);
		virtual ~Dog();

		Dog& operator= (const Dog &other);
		void	makeSound(void) const;
};

#endif
