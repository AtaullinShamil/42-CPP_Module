/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 06:29:27 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 10:47:46 by ntojamur         ###   ########.fr       */
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
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|  Index   |First Name| Last Name| Nickname |" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8 ; i++){
		if (contacts[i].print_info()){
			break ;
		}
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}
