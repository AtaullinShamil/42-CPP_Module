/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 10:58:12 by ntojamur          #+#    #+#             */
/*   Updated: 2022/11/25 06:39:45 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact{
	public:
		void		set(int num);
		std::string	get_name(void);
		void		print_info(void);

	private:
		std::string	first_name;
		std::string	second_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		int			index;
};

class  PhoneBook{
	private :
		int		num;
		Contact	contacts[8];

	public :
		void	set_num(void);
		void	add(void);
		void	search(void);
};

# endif
