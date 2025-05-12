/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:30:21 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/12 10:46:30 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap fragTrap1("Lydia");
    FragTrap fragTrap2("Dovahkiin");
    FragTrap fragTrap3;

    fragTrap3 = fragTrap2;

    fragTrap1.attack("a Draugr");
    fragTrap2.attack("Alduin");
    fragTrap3.attack("a Skeever");

    fragTrap1.highFivesGuys();
    fragTrap2.highFivesGuys();
    fragTrap3.highFivesGuys();
    
    return 0;
}