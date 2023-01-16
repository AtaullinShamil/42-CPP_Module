/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 08:38:02 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/16 09:19:31 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main()
{
	int		i_a = 2;
	int		i_b = 3;
	float	f_a = 2.3;
	float	f_b = 3.2;

	std::cout << "\nswap :" << std::endl;

	std::cout << "---int---" << std::endl;
	std::cout <<"a = " << i_a << ", b = " << i_b << std::endl;
	swap(i_a, i_b);
	std::cout <<"a = " << i_a << ", b = " << i_b << std::endl;
	std::cout << "--float--" << std::endl;
	std::cout <<"a = " << f_a << ", b = " << f_b << std::endl;
	swap(f_a, f_b);
	std::cout <<"a = " << f_a << ", b = " << f_b << std::endl;

	std::cout << "\nmin :" << std::endl;

	std::cout << "---int---" << std::endl;
	std::cout << "a = " << i_a << ", b = " << i_b << ", min = "<< min(i_a, i_b) << std::endl;
	std::cout << "--float--" << std::endl;
	std::cout << "a = " << f_a << ", b = " << f_b << ", min = "<< min(f_a, f_b) << std::endl;

	std::cout << "\nmax :" << std::endl;

	std::cout << "---int---" << std::endl;
	std::cout << "a = " << i_a << ", b = " << i_b << ", max = "<< max(i_a, i_b) << std::endl;
	std::cout << "--float--" << std::endl;
	std::cout << "a = " << f_a << ", b = " << f_b << ", max = "<< max(f_a, f_b) << std::endl;

	return (0);
}
