/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:40:43 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:12:17 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

using std::string;

# define THOUGHT "I think about what I think"
# define CAT_THOUGHT "Meow Meow Meow"
# define DOG_THOUGHT "Woof Woof Woof"

class Brain {
	protected:
		string ideas[100];

	public:
		Brain();
		Brain(string type);
		Brain(const Brain &old);
		virtual ~Brain();

		Brain& operator= (const Brain &other);
		const string getThought(void) const;
		void setThought(string const th);
};

#endif
