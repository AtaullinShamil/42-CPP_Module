/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:23:03 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 06:32:36 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int	main()
{
	PhoneBook PhoneBook;
	std::string cmd;

	PhoneBook.set_num();
	while (1){
		std::cout << "> enter a command\n> ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			PhoneBook.add();
		else if (cmd == "SEARCH")
			PhoneBook.search();
		else if (cmd == "EXIT")
			break ;
		else
			std::cout << "> Wrong command" << std::endl;
	}
	return (0);
}
