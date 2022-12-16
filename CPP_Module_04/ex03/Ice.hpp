/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:18 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:51:19 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria {
	private:

	public:
		Ice();
		Ice(Ice const &other);
		virtual ~Ice();

		Ice &operator=(Ice const &other);

		AMateria *clone(void) const;
		void use(ICharacter &target);
};

#endif
