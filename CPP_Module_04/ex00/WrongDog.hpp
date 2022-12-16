/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:20 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:12:58 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

using std::string;

class WrongDog : public WrongAnimal {
	public:
		WrongDog();
		WrongDog(WrongDog const &old);
		virtual ~WrongDog();

		WrongDog& operator= (const WrongDog &other);
		void	makeSound(void) const;
};

#endif
