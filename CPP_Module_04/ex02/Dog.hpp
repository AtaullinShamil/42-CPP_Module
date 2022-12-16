/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:08 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:53:35 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"
#include "Brain.hpp"

using std::string;

class Dog : public Animal {
	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const &old);
		virtual ~Dog();

		Dog& operator= (const Dog &other);
		void	makeSound(void) const;
		Brain	*getBrain(void) const;
};

#endif
