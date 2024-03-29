/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:50:17 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/13 00:09:57 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int to_sign, int to_exec):
	name(name),
	is_signed(false),
	grade_to_sign(to_sign),
	grade_to_execute(to_exec)
{
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &other):
	name(other.name),
	is_signed(other.is_signed),
	grade_to_sign(other.grade_to_sign),
	grade_to_execute(other.grade_to_execute)
{
	if (this->grade_to_sign < 1 || this->grade_to_execute < 1)
		throw Form::GradeTooHighException();
	if (this->grade_to_sign > 150 || this->grade_to_execute > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {
}

Form &Form::operator=(Form const &other) {
	this->is_signed = other.is_signed;
	std::cout << "Name and grades are const and can't be overwritten" << std::endl;
	return (*this);
}

std::string const &Form::getName(void) const {
	return (this->name);
}

bool Form::isSigned(void) const {
	return (this->is_signed);
}

int Form::getGradeToSign(void) const {
	return (this->grade_to_sign);
}

int Form::getGradeToExecute(void) const {
	return (this->grade_to_execute);
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (this->grade_to_sign < bureaucrat.getGrade())
		throw Form::GradeTooLowException();
	if (this->is_signed)
		throw Form::SignedFormException();
	this->is_signed = true;
}

void Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->grade_to_execute)
		throw Form::GradeTooLowException();
	if (!this->is_signed)
		throw Form::UnsignedFormException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return "FormException: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "FormException: Grade too Low";
}

const char* Form::SignedFormException::what() const throw() {
	return "FormException: Form already signed";
}

const char* Form::UnsignedFormException::what() const throw() {
	return "FormException: Form is unsigned";
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
	out << form.getName() << ", form: grade to sign - "
	<< form.getGradeToSign() << ", grade to execute - "
	<< form.getGradeToExecute() << " is ";
	if (form.isSigned())
		out << "signed.";
	else
		out << "not signed.";
	return (out);
}
