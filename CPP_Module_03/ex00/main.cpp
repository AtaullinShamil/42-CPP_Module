/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:47:24 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 13:59:37 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap Wigfrid("Wigfrid");

	Wigfrid.attack("Crawlinghorror");
	Wigfrid.takeDamage(8);
	Wigfrid.attack("Deerclop");
	Wigfrid.takeDamage(1);
	Wigfrid.attack("Klaus");
	Wigfrid.beRepaired(1);
	Wigfrid.attack("Pigman");
	Wigfrid.beRepaired(1);
	Wigfrid.beRepaired(1);
	Wigfrid.beRepaired(1);
	Wigfrid.beRepaired(1);
	Wigfrid.beRepaired(1);
	Wigfrid.beRepaired(1);
	Wigfrid.attack("Glommer");
	return (0);
}
