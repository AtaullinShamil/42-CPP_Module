/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 09:23:49 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/15 09:39:17 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const std::string Intern::form_types[3] = {
	"Robotomy request",
	"Presidential pardon",
	"Shrubbery creation"
};

Intern::Intern() {
}

Intern::Intern(Intern const &other) {
	(void)other;
}

Intern::~Intern() {
}

Intern &Intern::operator=(Intern const &other) {
	(void)other;
	return (*this);
}

const char* Intern::FormDoesNotExistException::what() const throw() {
	return "InternException: No such form exists!";
}

Form *Intern::makeForm(std::string const &formName, std::string const &target) const {
	int form_type = -1;
	for (int i = 0; i < 3; i++)
		if (formName == Intern::form_types[i])
			form_type = i;
	switch (form_type) {
		case (0):
			return (new RobotomyRequestForm(target));
			break;
		case (1):
			return (new PresidentialPardonForm(target));
			break;
		case (2):
			return (new ShrubberyCreationForm(target));
			break;
		default:
			throw FormDoesNotExistException();
			break;
	}
}
