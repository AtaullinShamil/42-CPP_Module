/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:14 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:51:15 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria {
	private:

	public:
		Cure();
		Cure(Cure const &other);
		virtual ~Cure();

		Cure &operator=(Cure const &other);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif
