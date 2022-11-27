/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 16:26:54 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/27 17:00:04 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie{
	private:
		std::string name;

	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string	name);

#endif
