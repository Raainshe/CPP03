/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 19:30:19 by rmakoni           #+#    #+#             */
/*   Updated: 2025/05/04 12:56:30 by rmakoni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>


class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hp;
        unsigned int _ep;
        unsigned int _aDamage;
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ~ClapTrap();

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void getClapTrapInfo() const;
        unsigned int getAttackDamage() const;

};

#endif