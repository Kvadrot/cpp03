/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:35:08 by ufo               #+#    #+#             */
/*   Updated: 2025/03/23 11:54:11 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ✅ Default Constructor
ScavTrap::ScavTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Default constructor called for ScavTrap " << _name << std::endl;
}

// ✅ Named Constructor
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "String constructor called for ScavTrap " << _name << std::endl;
}

// ✅ Copy Constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "Copy constructor called for ScavTrap " << other._name << std::endl;
}

// ✅ Destructor
ScavTrap::~ScavTrap() {
    std::cout << "Destructor called for ScavTrap " << _name << std::endl;
}

// ✅ Unique Method
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

// ✅ Override attack()
void ScavTrap:: attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ScavTrap " << _name << " viciously attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else if (_hitPoints <= 0) {
        std::cout << "ScavTrap " << _name << " is already dead." << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " has run out of energy points." << std::endl;
    }
}

