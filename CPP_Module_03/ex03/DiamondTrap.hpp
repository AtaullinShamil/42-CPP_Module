/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:15:58 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:17:40 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap{
	private:
		std::string name;

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &clap);
		virtual ~DiamondTrap();

		virtual void attack(std::string const & target);
		void whoAmI(void);
		DiamondTrap &operator=(DiamondTrap const &clap);
};

#endif
