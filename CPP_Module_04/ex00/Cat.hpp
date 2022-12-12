/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 15:29:38 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/12 15:47:10 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>

#include "Animal.hpp"

using std::string;

class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &old);
		virtual ~Cat();

		Cat& operator= (const Cat &other);
		void	makeSound(void) const;
};

#endif
