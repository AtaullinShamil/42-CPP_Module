/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:50:27 by ntojamur          #+#    #+#             */
/*   Updated: 2023/01/13 00:10:10 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>

class Form;
#include "Bureaucrat.hpp"

using std::string;

class Form {
	private:
		Form();

		std::string const	name;
		bool				is_signed;
		int const			grade_to_sign;
		int const			grade_to_execute;

	public:
		Form(std::string const &name, int to_sign, int to_exec);
		Form(Form const &other);
		virtual ~Form();
		Form &operator=(Form const &other);

		std::string const	&getName(void) const;
		bool				isSigned(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		void				beSigned(Bureaucrat &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const;

		class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
		};

		class GradeTooLowException: public std::exception {
			virtual const char* what() const throw();
		};

		class SignedFormException: public std::exception {
			virtual const char* what() const throw();
		};

		class UnsignedFormException: public std::exception {
			virtual const char* what() const throw();
		};
} ;

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif
