/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 02:47:33 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 12:03:27 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "no_name";
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << "CalpTrap " << name << " has been created" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hit_points = 10;
	this->energy = 10;
	this->attack_damage = 0;
	std::cout << "CalpTrap " << name << " has been created" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "CalpTrap " << name << " destructed" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap){
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	std::cout << "CalpTrap " << clap.name << " cloned throught =" << std::endl;
	return (*this);
}

void ClapTrap::attack(std::string const & target){
	if (this->energy > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attack " << target
			<<", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else if (this->hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " can't attack, it is destroyed" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enought energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->hit_points -= amount;
	if (this->hit_points < 0)
		this->hit_points = 0;
	std::cout << "ClapTrap " << this->name << " takes "
		<< amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hit_points > 0){
		if (this->hit_points == 10)
			std::cout << "ClapTrap " << this->name << "have full hit points" << std::endl;
		else{
			this->hit_points += amount;
			this->energy--;
			std::cout << "ClapTrap " << this->name << " repaired! Its health now is "
			<< this->hit_points <<"!" << std::endl;
		}
	}
	else if (this->hit_points <= 0)
		std::cout << "ClapTrap " << this->name << " can't be repaired, it's destroyed" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " doesn't have enought energy to repair" << std::endl;
}
