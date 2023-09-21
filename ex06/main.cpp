/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:47:12 by datran            #+#    #+#             */
/*   Updated: 2023/09/21 12:26:49 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cerr << "Usage: ./HarlFilter [DEBUG/INFO/WARNING/ERROR]"
                  << std::endl;
        return EXIT_FAILURE;
    }
    Harl harl;
    std::string level = av[1];
    std::string levels[]{"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = 4;
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            index = i;
            break;
        }
    }
    switch (index) {
    case 0:
        harl.complain("DEBUG");
        std::cout << std::endl;
    case 1:
        harl.complain("INFO");
        std::cout << std::endl;
    case 2:
        harl.complain("WARNING");
        std::cout << std::endl;
    case 3:
        harl.complain("ERROR");
        std::cout << std::endl;
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]"
                  << std::endl;
    }
    return EXIT_SUCCESS;
}
