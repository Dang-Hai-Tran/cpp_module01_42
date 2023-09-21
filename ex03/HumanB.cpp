/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 23:43:49 by datran            #+#    #+#             */
/*   Updated: 2023/09/21 10:42:57 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr) {}

void HumanB::attack(void) {
    if (weapon)
        std::cout << this->name << " attacks with " << weapon->getType() << std::endl;
    else
        std::cout << this->name << " can't attack without a weapon!" << std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon) {
    this->weapon = &newWeapon;
    std::cout << this->name << " set weapon " << this->weapon->getType() << std::endl;
}
