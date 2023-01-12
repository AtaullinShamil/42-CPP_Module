/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 17:02:03 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/12 13:13:27 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(string const &name, int grade): name(name), grade(grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	// std::cout << "constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &other): name(other.name), grade(other.grade) {
	if (this->grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->grade > 150)
		throw Bureaucrat::GradeTooLowException();
	// std::cout << "copy constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	// std::cout << "destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other) {
	this->grade = other.grade;
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw() {
	return "BureaucratException: Grade too High";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw() {
	return "BureaucratException: Grade too Low";
}

string const	&Bureaucrat::getName(void) const {
	return (this->name);
}

int	Bureaucrat::getGrade() const {
	return (this->grade);
}

void	Bureaucrat::upGrade(void) {
	this->grade--;
	if (this->grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::downGrade(void) {
	this->grade++;
	if (this->grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) {
	if (form.isSigned())
		std::cout << this->getName() << " cannot sign " << form.getName()
		<< " becase it is already signed" << std::endl;
	else if (this->grade <= form.getGradeToSign())
		std::cout << this->getName() << " signs form " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " cannot sign " << form.getName()
		<< " becase his grade too low " << std::endl;
	form.beSigned(*this);
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat) {
	out << bureaucrat.getName() <<", bureaucrat grade " << bureaucrat.getGrade();
	return (out);
}
