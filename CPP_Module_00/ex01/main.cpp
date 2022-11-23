/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:23:03 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/23 10:59:12 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	std::string cmd;

	while (1){
		std::cout << "> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			std::cout << "ok" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "ok" << std::endl;
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << cmd << " is not a command" << std::endl;
	}
	return (0);
}
