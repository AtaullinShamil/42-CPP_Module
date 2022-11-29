/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:37:47 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 04:31:00 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv){
	Harl	testHarl;
	if (argc != 2){
		std::cout << "Error : bad arguments" << std::endl;
		return (1);
	}
	testHarl.complain(argv[1]);
	return (0);
}
