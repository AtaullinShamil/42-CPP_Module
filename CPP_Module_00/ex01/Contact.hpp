/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 10:11:59 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 11:12:45 by ntojamur         ###   ########.fr       */
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
		Contact();

		void	set(int num);
		int		print_info(void);
		void	print_all(void);
};

# endif
