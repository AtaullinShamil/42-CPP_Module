/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 05:04:10 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 08:01:31 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class Fixed{
	private:
		int	fixed_val;
		static const int	raw = 8;

	public:
		Fixed();
		Fixed(const Fixed &old);
		~Fixed();

		Fixed &operator= (const Fixed &old);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

#endif
