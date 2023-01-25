/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:21:03 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/17 10:33:15 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	{
		std::vector<int> vec;
		for (int count=0; count < 5; ++count)
			vec.push_back(count);
		std::vector<int>::iterator found;
		found = easyfind(vec, 2);
		if (found == vec.end())
			std::cout << "2 not found\n";
		else
			std::cout << "2 in vector: " << *found << std::endl;
		found = easyfind(vec, 10);
		if (found == vec.end())
			std::cout << "10 not found\n";
		else
			std::cout << "10 in vector: " << *found << std::endl;
	}
	{
		std::list<int> lst;
		for (int count=0; count < 5; ++count)
			lst.push_back(count);
		std::list<int>::iterator found;
		found = easyfind(lst, 2);
		if (found == lst.end())
			std::cout << "2 not found\n";
		else
			std::cout << "2 in list: " << *found << std::endl;
		found = easyfind(lst, 10);
		if (found == lst.end())
			std::cout << "10 not found\n";
		else
			std::cout << "10 in list: " << *found << std::endl;
	}
}
