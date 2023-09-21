/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:19:23 by datran            #+#    #+#             */
/*   Updated: 2023/09/20 17:33:28 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name) {
    Zombie *zombie = new Zombie(name);
    return zombie;
}

void randomChump(std::string name) {
    Zombie zombie(name);
    zombie.announce();
}

int main() {
    Zombie *heapZombie = newZombie("Heap Zombie");
    heapZombie->announce();
    delete heapZombie;
    randomChump("Stack Zombie");
    return 0;
}
