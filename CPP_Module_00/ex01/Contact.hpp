/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:11:59 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 10:28:34 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	private:
		std::string	first_name;
		std::string	second_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		int			index;

	public:
		void		set(int num);
		std::string	get_name(void);
		void		print_info(void);
};

# endif
