/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntojamur <ntojamur@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 15:04:29 by ntojamur          #+#    #+#             */
/*   Updated: 2022/12/06 17:38:35 by ntojamur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->name = name;
	this->hit_points = 100;
	this->energy = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap " << name << " has been created" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other){
	*this = other;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << name << " destructed" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name << " : Guys! High FIVE!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &clap){
	this->name = clap.name;
	this->hit_points = clap.hit_points;
	this->energy = clap.energy;
	this->attack_damage = clap.attack_damage;
	std::cout << "FragTrap " << clap.name << " cloned" << std::endl;
	return (*this);
}
