/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:16:07 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/02 09:13:12 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		static const int raw = 8;
		int fixed_val;

	public:
		Fixed();
		Fixed(int const val);
		Fixed(float const val);
		Fixed(const Fixed &old);
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator= (const Fixed &old);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif
