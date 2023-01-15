/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:33:07 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/15 09:21:17 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

# define TREE	"      ccee88oo\n"\
				"  C8O8O8Q8PoOb o8oo\n"\
				"dOB69QO8PdUOpugoO9bD\n"\
				"CgggbU8OU qOp qOdoUOdcb\n"\
				"    6OuU  /p u gcoUodpP\n"\
				"        ||/  /douUP\n"\
				"          ||/\n"\
				"         /| |/\n"\
				"         |||\n"\
				"        |||||\n"\
				"......./|||||.......\n\n"

class ShrubberyCreationForm : public Form {
	private:
		ShrubberyCreationForm();

		static std::string const name;
		std::string const target;

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &other);
		~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

		class FileOpenException: public std::exception {
			virtual const char* what() const throw();
		};

		void execute(Bureaucrat const &executor) const;
} ;

#endif
