/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:01:49 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/12 13:19:56 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main() {
	Bureaucrat b_1("b_1", 100);
	std::cout << b_1 << std::endl;

	Form f_1("f_1", 100, 50);
	std::cout << f_1 << std::endl;

	b_1.signForm(f_1);
	std::cout << f_1 << std::endl;

	std::cout << "---------------" << std::endl;

	Form f_2("f_2", 99, 50);
	std::cout << f_2 << std::endl;
	try
	{
		b_1.signForm(f_2);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f_2 << std::endl;

	std::cout << "---------------" << std::endl;

	Form f_3("f_3", 101, 50);
	std::cout << f_3 << std::endl;
	b_1.signForm(f_3);
	std::cout << f_3 << std::endl;
	try
	{
		b_1.signForm(f_3);
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << f_3 << std::endl;

	std::cout << "---------------" << std::endl;

	try
	{
		Form f_4("f_4", 99, 50);
		std::cout << f_4 << std::endl;
		f_4.beSigned(b_1);
		std::cout << f_4 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------" << std::endl;

	try
	{
		Form f_5("f_5", 151, 50);
		std::cout << f_5 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------" << std::endl;

	try
	{
		Form f_6("f_6", 0, 50);
		std::cout << f_6 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

		std::cout << "---------------" << std::endl;

	try
	{
		Form f_7("f_7", 100, 1000);
		std::cout << f_7 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "---------------" << std::endl;


	try
	{
		Form f_8("f_8", 100, 0);
		std::cout << f_8 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
