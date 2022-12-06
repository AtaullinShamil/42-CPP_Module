/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:25:45 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 14:23:35 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->name = "no_name";
	this->hit_points = 100;
	this->energy = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	this->name = name;
	this->hit_points = 100;
	this->energy = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap " << name << " has been created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other){
	*this = other;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << name << " destructed" << std::endl;
}

void ScavTrap::attack(std::string const & target){
	if (this->energy > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attack " << target
			<<", causing " << this->attack_damage << " points of damage!" << std::endl;
		this->energy--;
	}
	else if (this->hit_points <= 0)
		std::cout << "ScavTrap " << this->name << " can't attack, it is destroyed" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " doesn't have enought energy to attack" << std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap " << this->name << " guardGate!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &clap){
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	std::cout << "ScavTrap " << clap.name << " cloned" << std::endl;
	return (*this);
}
