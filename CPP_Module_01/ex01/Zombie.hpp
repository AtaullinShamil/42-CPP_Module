/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 17:18:34 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/28 01:14:57 by ntojamur         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
