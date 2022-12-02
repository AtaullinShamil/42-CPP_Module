/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:36:25 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/02 10:05:37 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void)
{
	Point	point1(-3, 5);
	Point	point2(3, 0);
	Point	point3(0, -5);

	for (float x = 0.244; x <= 3; x += 0.846)
	{
		for (float y = 0.246; y <= 3; y += 0.846)
		{
			Point	findPoint(x, y);
			std::cout << "Point x = " << x << ", y = " << y << "\t\t[res = ";
			std::string res = bsp(point1, point2, point3, findPoint) == 1 ? "true" : "false" ;
			std::cout << res << "]"<< std::endl;
		}
	}
	return (1);
}
