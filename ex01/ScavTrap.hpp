/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 16:35:16 by ufo               #+#    #+#             */
/*   Updated: 2025/03/27 16:41:01 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    public:
    //Constructors
        ScavTrap();
        ScavTrap(const std::string& name);
        ScavTrap(const ScavTrap &other);
        ScavTrap& operator=(const ScavTrap& other);

        ~ScavTrap();

        void guardGate();
};


