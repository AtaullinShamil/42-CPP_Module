/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 13:51:33 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/16 13:51:34 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
	amount(0) {
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &other):
	amount(0) {
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
}

MateriaSource &MateriaSource::operator=(MateriaSource const &other) {
	for (int i = 0; i < this->amount; i++)
		delete this->sources[i];
	this->amount = 0;
	for (int i = 0; i < other.amount; i++)
		this->learnMateria(other.sources[i]->clone());
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {
	if (this->amount  == 4 || m == NULL)
		return ;
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i] == m)
			return ;
	this->sources[this->amount++] = m;
}

AMateria* MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < this->amount; i++)
		if (this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	return (NULL);
}
