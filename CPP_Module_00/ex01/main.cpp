/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:23:03 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 10:18:48 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook PhoneBook;
	std::string cmd;

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
