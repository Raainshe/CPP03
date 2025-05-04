/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:30:21 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/04 13:03:47 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
    // Create ClapTrap instances with Skyrim names
    ClapTrap clap1("Lydia");
    ClapTrap clap2("Draugr");
    ClapTrap clap3("Alduin"); // For copy testing
    ClapTrap clap4; // Default constructor (will be named "Default")

    std::cout << "\n--- Initial Status ---" << std::endl;
    clap1.getClapTrapInfo();
    clap2.getClapTrapInfo();
    clap4.getClapTrapInfo(); // Default name

    std::cout << "\n--- Basic Actions ---" << std::endl;
    clap1.attack("Bandit"); // Lydia attacks a Bandit
    clap2.takeDamage(5);    // Draugr takes damage
    clap2.beRepaired(3);    // Draugr gets repaired
    clap1.getClapTrapInfo();
    clap2.getClapTrapInfo();

    std::cout << "\n--- Depleting Energy ---" << std::endl;
    // Attack/Repair 10 times to deplete energy
    for (int i = 0; i < 10; ++i) {
        clap1.attack("Frost Spider"); // Lydia keeps attacking
    }
    clap1.attack("Giant"); // Should fail due to no EP
    clap1.beRepaired(1); // Should fail due to no EP
    clap1.getClapTrapInfo();

    std::cout << "\n--- Taking Lethal Damage ---" << std::endl;
    clap2.getClapTrapInfo();
    clap2.takeDamage(10); // Draugr takes lethal damage
    clap2.takeDamage(1);  // Already dead
    clap2.attack("Ghost"); // Should fail due to 0 HP
    clap2.beRepaired(5); // Should fail due to 0 HP
    clap2.getClapTrapInfo();

    std::cout << "\n--- Copy and Assignment (Implicit) ---" << std::endl;
    ClapTrap clap5 = clap1; // Copy constructor (copy of Lydia)
    clap3 = clap2; // Assignment operator (Alduin becomes like the dead Draugr)
    std::cout << "Clap5 (copy of Lydia):" << std::endl;
    clap5.getClapTrapInfo();
    std::cout << "Clap3 (assigned from Draugr):" << std::endl;
    clap3.getClapTrapInfo();


    std::cout << "\n--- Destruction ---" << std::endl;
    // Destructors will be called automatically when main exits

    return 0;
}