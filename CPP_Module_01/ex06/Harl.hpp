/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 03:37:44 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/29 04:08:08 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl{
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void other ( void );
	public:
		void complain( std::string level );
};

#endif
