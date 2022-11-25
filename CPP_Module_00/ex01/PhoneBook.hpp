/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:12:38 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 10:28:59 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONE_BOOK_HPP
# define PHONE_BOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include "Contact.hpp"

class  PhoneBook{
	private :
		int		num;
		Contact	contacts[8];

	public :
		PhoneBook();

		void	add(void);
		void	search(void);
};

# endif
