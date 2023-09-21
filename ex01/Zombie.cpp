/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:37:36 by datran            #+#    #+#             */
/*   Updated: 2023/09/21 09:36:21 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie() { std::cout << "Default constructor called" << std::endl; }

Zombie::Zombie(const Zombie &zombie) {
    std::cout << "Copy constructor is called" << std::endl;
    *this = zombie;
}

Zombie &Zombie::operator=(const Zombie &zombie) {
    std::cout << "Operator = is called" << std::endl;
    if (this == &zombie)
        return (*this);
    this->name = zombie.name;
    return (*this);
}

Zombie::Zombie(std::string name) : name(name) {
    std::cout << "Constructor with name = " << name << " is called"
              << std::endl;
};

Zombie::~Zombie() {
    std::cout << "Destructor is called" << std::endl;
    std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce(void) {
    std::cout << name << " call method announce" << std::endl;
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) { this->name = name; }
