/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 08:16:05 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/02 09:11:40 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	fixed_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val){
	fixed_val = val << raw;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const val){
	std::cout << "Float constructor called\n";
	this->fixed_val = roundf(val * (1 << Fixed::raw));
}

Fixed::Fixed(const Fixed &old){
	std::cout << "Copy constructor called\n";
	*this = old;
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const{
	return ((float)this->fixed_val/(float)(1 << Fixed::raw));
}

int Fixed::toInt( void ) const{
	return (this->fixed_val >> Fixed::raw);
}

std::ostream &operator<<(std::ostream &out, Fixed const &value){
	out << value.toFloat();
	return (out);
}

int	Fixed::getRawBits(void) const{
	return (this->fixed_val);
}

void Fixed::setRawBits( int const raw ){
	this->fixed_val = raw;
}

Fixed &Fixed::operator= (const Fixed &old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_val = old.getRawBits();
	return (*this);
}


