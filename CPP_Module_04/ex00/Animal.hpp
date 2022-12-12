/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:27:20 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/12 15:58:10 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

using std::string;

class Animal {
	protected:
		string type;

	public:
		Animal();
		Animal(const Animal &old);
		virtual ~Animal();

		string	getType(void) const;
		Animal& operator= (const Animal &other);
		virtual void	makeSound(void) const;
};

#endif
