/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 09:37:10 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/02 09:43:12 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		Point(const Point &other);
		Point(float const x, float const y);
		virtual ~Point();

		float	getX(void) const;
		float	getY(void) const;
		Point	&operator= (const Point &other);

	private:
		const Fixed	x;
		const Fixed	y;
};

std::ostream &operator<<(std::ostream &o, const Point &other);
bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
