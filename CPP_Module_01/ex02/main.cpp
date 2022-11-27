/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 01:16:47 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/28 02:07:18 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	variable = "HI THIS IS BRAIN";
	std::string	*stringPTR = &variable;
	std::string	&stringREF = variable;

	std::cout << "variable\t-\t" << &variable << std::endl;
	std::cout << "stringPTR\t-\t" << stringPTR << std::endl;
	std::cout << "stringREF\t-\t" << &stringREF << std::endl;
	std::cout << "variable\t-\t" << variable << std::endl;
	std::cout << "stringPTR\t-\t" << *stringPTR << std::endl;
	std::cout << "stringREF\t-\t" << stringREF << std::endl;
	return (0);
}
