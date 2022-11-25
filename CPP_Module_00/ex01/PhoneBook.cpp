/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:29:27 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 11:14:37 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	num = 0;
}

void	PhoneBook::add(void){
	contacts[num].set(num);
	num++;
	if (num > 7)
		num = 0;
}

void	PhoneBook::search(void){
	int			index;
	std::string	string;

	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8 ; i++){
		if (contacts[i].print_info()){
			break ;
		}
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "> enter the contact's index\n> ";
	std::getline(std::cin, string);
	for (size_t i = 0; i < string.length(); i++){
		if (!isdigit(string[i])){
			std::cout << "invalid index. only digits" << std::endl;
			return ;
		}
	}
	index = stoi(string);
	if (index < 0 || index > 7){
		std::cout << "invalid index. 0 - 7" << std::endl;
		return ;
	}
	contacts[index].print_all();
}
