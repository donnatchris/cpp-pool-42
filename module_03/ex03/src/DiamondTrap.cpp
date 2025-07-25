/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chdonnat <chdonnat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 21:25:08 by christophed       #+#    #+#             */
/*   Updated: 2025/05/12 13:20:55 by chdonnat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "../include/DiamondTrap.hpp"

/* ************************************************************************** */
/*								canonical form  							  */
/* ************************************************************************** */

/* *************************** default constructor ************************** */

DiamondTrap::DiamondTrap()
{
	_name = "Unamed";
	_hitPoints = 100;
	_energyPoints = 10;
	_attackDamage = 30;
	std::cout << "A new DiamondTrap has been born, but wasn't named.\n"
		<< "His name has been set to: Unamed." << std::endl;
}

/* ******************************* destructor ****************************** */

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap object named " << _name
		<< " has been destroyed." << std::endl;
}

/* ***************************** copy constructor *************************** */

DiamondTrap::DiamondTrap( const DiamondTrap& other ) :
	ClapTrap(other),
	ScavTrap(other),
	FragTrap(other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	std::cout << "DiamondTrap " << _name
		<< " has just been born and is a copy of "
		<< other.getName() << "!" << std::endl;
}

/* ********************** copy assignment operator ************************** */

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& other )
{
	if (this != &other)
	{
		_name = other._name;
		_hitPoints = other._hitPoints;
		_energyPoints = other._energyPoints;
		_attackDamage = other._attackDamage;
	}
	return (*this);
}

/* ************************************************************************** */
/*								public methods  							  */
/* ************************************************************************** */

/* ******************************* constructors ***************************** */

DiamondTrap::DiamondTrap( const std::string& name ) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name),
	_name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "Here comes a new challenger: "
		<< "DiamondTrap " << _name << "!" << std::endl;
}

/* ******************************** getters ********************************* */

/* ******************************** setters ******************************** */

/* ************************* other public methods ************************** */

void	DiamondTrap::attack( const std::string& target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap Hello, I am " << this->_name
	<< " and my ClapTrap name is " <<  ClapTrap::getName() << std::endl;
}

/* ************************************************************************** */
/*								private methods  							  */
/* ************************************************************************** */

/* ************************************************************************** */
/*							non-member functions  							  */
/* ************************************************************************** */
