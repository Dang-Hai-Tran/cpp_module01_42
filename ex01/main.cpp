/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:19:23 by datran            #+#    #+#             */
/*   Updated: 2023/07/19 22:56:06 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *horde = zombieHorde(5, "John");
    for (int i = 0; i < 5; i++) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}
