/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:00:10 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 11:12:46 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

using std::string;

class WrongAnimal {
	protected:
		string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &old);
		virtual ~WrongAnimal();

		string	getType(void) const;
		WrongAnimal& operator= (const WrongAnimal &other);
		void	makeSound(void) const;
};

#endif
