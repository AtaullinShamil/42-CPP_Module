/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:03 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:52:52 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->type = type;
	std::cout << type << " constructed" << std::endl;
}

AMateria::~AMateria() {
}

std::string const &AMateria::getType() const {
	return (this->type);
}

void AMateria::use(ICharacter& target) {
	std::cout << "Ghhh! " << this->type << " casts into " << target.getName() << "!\n";
}
