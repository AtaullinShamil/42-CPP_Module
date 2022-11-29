/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:09:41 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 03:35:22 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ){
	std::cout << "DEBUG" << std::endl;
}

void Harl::info( void ){
	std::cout << "INFO" << std::endl;
}

void Harl::warning( void ){
	std::cout << "WARNING" << std::endl;
}

void Harl::error( void ){
	std::cout << "ERROR" << std::endl;
}

void Harl::complain(std::string level){
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
		if (level.compare(levels[i]) == 0)
			(this->*functions[i])();
}
