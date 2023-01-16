/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:38:02 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/16 09:43:44 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
	int intR[5] = { 0, 1, 2, 3, 4 };
	iter(intR, 5, &func); std::cout << std::endl;

	float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	iter(floatR, 5, &func); std::cout << std::endl;

	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
	iter(doubleR, 5, &func); std::cout << std::endl;

	bool boolR[2] = { false, true };
	iter(boolR, 2, &func); std::cout << std::endl;

	std::string stringR[5] = {"templates", "are", "very", "fun", "!"};
	iter(stringR, 5, &func); std::cout << std::endl;
	iter(stringR, 2, &func); std::cout << std::endl;
	iter(stringR, 0, &func); std::cout << std::endl;
	return (0);
}
