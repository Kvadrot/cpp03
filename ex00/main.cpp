/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ufo <ufo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 15:57:52 by ufo               #+#    #+#             */
/*   Updated: 2025/03/17 11:25:47 by ufo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    // ✅ Test 1: Default ClapTrap (Should use default values: "Default", 10 HP, 10 Energy)
    ClapTrap defaultClap;
    std::cout << std::endl;

    // ✅ Test 2: Named ClapTrap (Should have the given name but default HP, Energy, and Damage)
    ClapTrap namedClap("Warrior");
    std::cout << std::endl;

    // ✅ Test 3: Copy Constructor (Should create an exact copy)
    ClapTrap copiedClap(namedClap);
    std::cout << std::endl;

    // ✅ Test 4: Attack (Should consume energy and display correct messages)
    std::cout << "=== Testing Attack ===" << std::endl;
    namedClap.attack("Enemy");
    namedClap.attack("Enemy");
    std::cout << std::endl;

    // ✅ Test 5: Taking Damage (Should reduce HP correctly)
    std::cout << "=== Testing Taking Damage ===" << std::endl;
    namedClap.takeDamage(5);
    namedClap.takeDamage(10); // Should be dead now
    namedClap.takeDamage(5);  // Should not take more damage
    std::cout << std::endl;

    // ✅ Test 6: Repairing (Should restore HP if not dead)
    std::cout << "=== Testing Repairing ===" << std::endl;
    defaultClap.beRepaired(5);
    namedClap.beRepaired(5); // Should fail since it's dead
    std::cout << std::endl;

    // ✅ Test 7: Energy Depletion (Should fail to act if out of energy)
    std::cout << "=== Testing Energy Depletion ===" << std::endl;
    for (int i = 0; i < 10; i++) { // Use all energy
        defaultClap.attack("Dummy");
    }
    defaultClap.beRepaired(5); // Should fail due to no energy
    std::cout << std::endl;

    return 0;
}
