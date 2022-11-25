/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:29:59 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 11:17:01 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){
	index = -1;
}

void Contact::set(int num)
{
	index = num;
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
	std::cout << "|--------------------------|" << std::endl;
	std::cout << "|the contact has been added|" << std::endl;
	std::cout << "|--------------------------|" << std::endl;
}

int	Contact::print_info(void){
	if (index == -1)
		return (1);
	std::cout << "|";
	std::cout << std::setw(10) << index << "|";
	if (first_name.length() < 11)
		std::cout << std::setw(10) << first_name << "|";
	else
		std::cout << first_name.substr(0, 9) << "." << "|";
	if (second_name.length() < 11)
		std::cout << std::setw(10) << second_name << "|";
	else
		std::cout << second_name.substr(0, 9) << "." << "|";
	if (nickname.length() < 11)
		std::cout << std::setw(10) << nickname << "|" << std::endl;
	else
		std::cout << nickname.substr(0, 9) << "." << "|" << std::endl;
	return (0);
}

void	Contact::print_all(void){
	if (index == -1)
		return ;
	std::cout << "First Name : " << first_name << std::endl;
	std::cout << "Last Name : " << second_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}
