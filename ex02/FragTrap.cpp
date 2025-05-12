/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 10:27:06 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/12 10:43:24 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Default FragTrap constructor called" << std::endl;
    this->_name = "Default";
    this->_hp = 100;
    this->_ep = 100;
    this->_aDamage = 30;
}

FragTrap::FragTrap(const std::string& name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = name;
    this->_hp = 100;
    this->_ep = 100;
    this->_aDamage = 30;
}

FragTrap::FragTrap(const FragTrap& src) : ClapTrap(src)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = src;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hp = rhs._hp;
        this->_ep = rhs._ep;
        this->_aDamage = rhs._aDamage;
    }
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " needs a high five :)" << std::endl;
}
