/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:23:57 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/15 09:39:43 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {
	private:
		static const std::string form_types[3];

	public:
		Intern();
		Intern(Intern const &other);
		~Intern();
		Intern &operator=(Intern const &other);

		class FormDoesNotExistException: public std::exception {
			virtual const char* what() const throw();
		};

		Form *makeForm(std::string const &formName, std::string const &target) const;
} ;

#endif
