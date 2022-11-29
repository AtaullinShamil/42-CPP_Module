/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:09:52 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 03:36:22 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(){
	std::string	levels[6] = {"DEBUG", "INFO", "WARNING", "ERROR", "empty", ""};
	Harl	testHarl;

	for (int i = 0; i < 6; i++)
		testHarl.complain(levels[i]);
}
