/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:30:21 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/06 15:22:05 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "--- ClapTrap Tests ---" << std::endl;
    { // Scope for ClapTrap instances
        ClapTrap clap1("Lydia");
        ClapTrap clap2("Draugr");

        clap1.attack("Bandit");
        clap2.takeDamage(6);
        clap2.beRepaired(4);
        clap1.takeDamage(12); // Should be destroyed
        clap1.attack("Skag"); // Should fail
    } // clap1 and clap2 destructors called here

    std::cout << "\n--- ScavTrap Tests ---" << std::endl;
    { // Scope for ScavTrap instances to observe construction/destruction order
        std::cout << "\n--- Constructing ScavTraps ---" << std::endl;
        ScavTrap scav1("Guard Bot"); // Name constructor
        ScavTrap scav2; // Default constructor
        ScavTrap scav3(scav1); // Copy constructor

        std::cout << "\n--- ScavTrap Actions ---" << std::endl;
        scav1.attack("Intruder");
        scav2.takeDamage(30);
        scav2.beRepaired(20);
        scav1.guardGate(); // Test new ability
        scav2.guardGate();

        std::cout << "\n--- ScavTrap Assignment ---" << std::endl;
        scav2 = scav1; // Assignment operator
        std::cout << "Scav2 after assignment attacks:" << std::endl;
        scav2.attack("Another Intruder");

        std::cout << "\n--- ScavTrap Taking Lethal Damage ---" << std::endl;
        scav1.takeDamage(101); // Destroy scav1
        scav1.attack("Ghost"); // Should fail
        scav1.guardGate(); // Should fail

        std::cout << "\n--- ScavTrap Destruction (End of Scope) ---" << std::endl;
    } // scav1, scav2, scav3 destructors called here (in reverse order of construction)

    std::cout << "\n--- Polymorphism Test (Optional - Requires virtual destructor in ClapTrap) ---" << std::endl;
    {
        std::cout << "\n--- Constructing Base Pointer with Derived Object ---" << std::endl;
        ClapTrap* ptr = new ScavTrap("PolyScav"); // Base pointer, Derived object

        std::cout << "\n--- Calling Attack via Base Pointer ---" << std::endl;
        ptr->attack("Target"); // Calls ClapTrap::attack unless it's virtual

        std::cout << "\n--- Deleting via Base Pointer ---" << std::endl;
        delete ptr; 
    }
    return 0;
}