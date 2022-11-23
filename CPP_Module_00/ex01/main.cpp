/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:23:03 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/23 13:17:57 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void Contact::set(void)
{
	std::cout << "> enter a first name\n> ";
	std::getline(std::cin, first_name);
	while (first_name.length() == 0){
		std::cout << "> the field cannot be empty. enter a first name\n> ";
		std::getline(std::cin, first_name);
	}
	std::cout << "> enter a second name\n> ";
	std::getline(std::cin, second_name);
	while (second_name.length() == 0){
		std::cout << "> the field cannot be empty. enter a second name\n> ";
		std::getline(std::cin, second_name);
	}
	std::cout << "> enter a nickname\n> ";
	std::getline(std::cin, nickname);
	while (nickname.length() == 0){
		std::cout << "> the field cannot be empty. enter a nickname\n> ";
		std::getline(std::cin, nickname);
	}
	std::cout << "> enter a phone number\n> ";
	std::getline(std::cin, phone_number);
	while (phone_number.length() == 0){
		std::cout << "> the field cannot be empty. enter a phone number\n> ";
		std::getline(std::cin, phone_number);
	}
	std::cout << "> enter a darkest secret\n> ";
	std::getline(std::cin, darkest_secret);
	while (darkest_secret.length() == 0){
		std::cout << "> the field cannot be empty. enter a darkest secret\n> ";
		std::getline(std::cin, darkest_secret);
	}
	std::cout << "|-------------------------|" << std::endl;
	std::cout << "|the contact has been added|" << std::endl;
	std::cout << "|--------------------------|" << std::endl;
}

void	PhoneBook::add(void){
	contacts[num].set();
	num++;
	if (num > 7)
		num = 0;
}

void	PhoneBook::set_num(){
	num = 0;
}

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
			std::cout << "> " << cmd << " is not a command" << std::endl;
	}
	return (0);
}
