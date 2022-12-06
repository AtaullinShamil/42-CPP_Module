/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:19:16 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:19:38 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &clap);
		virtual ~ScavTrap();

		virtual void	attack(std::string const & target);
		void			guardGate(void);
		ScavTrap		&operator=(ScavTrap const &clap);
};

#endif
