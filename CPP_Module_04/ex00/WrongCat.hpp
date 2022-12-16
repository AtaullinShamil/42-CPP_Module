/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:14 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:12:53 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>

#include "WrongAnimal.hpp"

using std::string;

class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const &old);
		virtual ~WrongCat();

		WrongCat& operator= (const WrongCat &other);
		void	makeSound(void) const;
};

#endif
