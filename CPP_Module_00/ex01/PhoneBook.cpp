/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:29:27 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 06:33:21 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

void	PhoneBook::add(void){
	contacts[num].set(num);
	num++;
	if (num > 7)
		num = 0;
}

void	PhoneBook::set_num(void){
	num = 0;
}


void	PhoneBook::search(void){
	std::string name;

	std::cout << "> enter a name of the contact\n> ";
	std::getline(std::cin, name);
	for (int i = 0; i < 8; i++){
		if (name == contacts[i].get_name()){
			contacts[i].print_info();
			return ;
		}
	}
	std::cout << "> this contact was not found" << std::endl;
}
