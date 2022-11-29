/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 05:04:21 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 08:13:41 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->fixed_val = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &old){
	std::cout << "Copy constructor called" << std::endl;
	*this = old;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator= (const Fixed &old){
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixed_val = old.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called\n";
	return (this->fixed_val);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called\n";
	this->fixed_val = raw;
}

