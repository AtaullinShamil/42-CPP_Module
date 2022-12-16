/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:27:20 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:25:16 by ntojamur         ###   ########.fr       */
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
		virtual ~Animal();

		string	getType(void) const;
		virtual Animal& operator= (const Animal &other);
		virtual void	makeSound(void) const = 0;
};

#endif
