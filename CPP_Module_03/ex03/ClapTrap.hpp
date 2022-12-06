/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:19:08 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:19:09 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap{
	protected:
		std::string	name;
		int	hit_points;
		int	energy;
		int	attack_damage;

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &clap);
		virtual ~ClapTrap();

		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap		&operator=(ClapTrap const &clap);
};

#endif
