/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:30:13 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/04 12:56:55 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    _name = "Default";
    _hp = 10;
    _ep = 10;
    _aDamage = 0;
}
ClapTrap::ClapTrap(const std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    _name = name;
    _hp = 10;
    _ep = 10;
    _aDamage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (_ep == 0)
    {
        std::cout << "ClapTrap " << _name << " can't attack! They have no EP left :(" << std::endl;
        return;
    }

    if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
        return;
    }

    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _aDamage << " points of damage!" << std::endl;
    _ep--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
        return;
    }

    if (amount > _hp)
        _hp = 0;
    else
        _hp -= amount;

    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! HP left: " << _hp << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_hp == 0)
    {
        std::cout << "ClapTrap " << _name << " is dead! They can't be repaired!" << std::endl;
        return;
    }

    if (_ep == 0)
    {
        std::cout << "ClapTrap " << _name << " can't be repaired! They have no EP left :(" << std::endl;
        return;
    }

    _hp += amount;
    _aDamage++;
    _ep--;
    std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " points! HP left: " << _hp << std::endl;
}

void ClapTrap::getClapTrapInfo() const
{
    std::cout << "Name: " << _name << ", HP: " << _hp << ", EP: " << _ep << ", Attack Damage: " << _aDamage << std::endl;
}

unsigned int ClapTrap::getAttackDamage() const
{
    return _aDamage;
}