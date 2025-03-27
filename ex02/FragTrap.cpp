/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:59:36 by ufo               #+#    #+#             */
/*   Updated: 2025/03/27 17:23:29 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default Constructor
FragTrap::FragTrap() : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Default constructor called for FragTrap " << _name << std::endl;
}

//  Named Constructor
FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "String constructor called for FragTrap " << _name << std::endl;
}

//  Copy Constructor
FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    std::cout << "Copy constructor called for FragTrap " << other._name << std::endl;
}

FragTrap& FragTrap:: operator=(const FragTrap& other) {
    if (this != &other) {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage;
    }
    std::cout << "FragTrap copy assignment operator called for " << _name << std::endl;
    return (*this);
}

//  Destructor
FragTrap::~FragTrap() {
    std::cout << "Destructor called for FragTrap " << _name << std::endl;
}

void FragTrap:: highFivesGuys(void) {
    std::cout << "Fragtrap: " << this->_name << "requests highFive!\n";
}

