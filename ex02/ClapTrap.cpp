/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:27:15 by ufo               #+#    #+#             */
/*   Updated: 2025/03/27 17:18:21 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

// ============================
// Constructors
// ============================

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "String constructor called for ClapTrap " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
    std::cout << "Copy constructor called for ClapTrap " << other._name << std::endl;
    *this = other;  // Uses assignment operator
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "ClapTrap copy assignment operator called for " << _name << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for ClapTrap " << _name << std::endl;
}

// ============================
// Member Functions
// ============================

void ClapTrap::attack(const std::string& target) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target
                  << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    } else if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has run out of energy points." << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (_hitPoints > 0) {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << _name << " took " << amount << " damage, remaining HP: " << _hitPoints << std::endl;
        if (_hitPoints <= 0) {
            std::cout << "ClapTrap " << _name << " has died!" << std::endl;
        }
    } else {
        std::cout << "ClapTrap " << _name << " is already dead and cannot take damage." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (_energyPoints > 0 && _hitPoints > 0) {
        _hitPoints += amount;
        _energyPoints--;
        std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " HP!" << std::endl;
    } else if (_hitPoints <= 0) {
        std::cout << "ClapTrap " << _name << " is already dead and cannot be repaired." << std::endl;
    } else {
        std::cout << "ClapTrap " << _name << " has no energy left to repair itself." << std::endl;
    }
}
