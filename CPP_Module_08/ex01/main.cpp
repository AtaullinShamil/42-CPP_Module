/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:21:03 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/17 10:45:44 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "Span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int> tmp;
		Span sprandom = Span(100);
		for (int i = 0; i < 100; i++)
			tmp.push_back((rand() % 1000) - 500);
		sprandom.addNumber(tmp.begin(), tmp.end());
		std::cout << sprandom << std::endl;
		std::cout << sprandom.shortestSpan() << std::endl;
		std::cout << sprandom.longestSpan() << std::endl;
	}

	return (0);
}
