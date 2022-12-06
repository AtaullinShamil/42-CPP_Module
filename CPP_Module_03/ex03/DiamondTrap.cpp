/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 17:15:55 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:36:11 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name){
	this->name = name;
	this->hit_points = this->FragTrap::hit_points;
	this->energy = this->ScavTrap::energy;
	std::cout << "\n energy - " << this-> energy << "\n" << this->ScavTrap::energy << "\n\n";
	this->attack_damage = this->FragTrap::attack_damage;;
	std::cout << "DiamondTrap " << this->name << " constructed!\n"
		<< "Hits: " << this->hit_points << " DMG: "
		<< this->attack_damage << " Energy: " << this->energy << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &clap) :
	ClapTrap(clap), ScavTrap(clap.name), FragTrap(clap.name){
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap " << this->name << " distructed!" << std::endl;
}

void DiamondTrap::attack(std::string const & target){
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(void){
	std::cout << "DiamondTrap "<< this->name << " : seems i'm " << this->name << " trap... or " << this->ClapTrap::name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &clap){
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	return (*this);
}
