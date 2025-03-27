/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 16:38:03 by ufo               #+#    #+#             */
/*   Updated: 2025/03/27 17:05:20 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    // Constructors & Destructor
    FragTrap();  
    FragTrap(const std::string& name);
    FragTrap(const FragTrap &other);
    FragTrap& operator=(const FragTrap &other);
    virtual ~FragTrap();

    // Member functions
    void highFivesGuys(void);
};


#endif