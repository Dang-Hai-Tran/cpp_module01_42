/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:34:55 by datran            #+#    #+#             */
/*   Updated: 2023/09/21 09:36:03 by datran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
  private:
    std::string name;

  public:
    Zombie();
    Zombie(const Zombie &zombie);
    Zombie &operator=(const Zombie &zombie);
    ~Zombie();
    Zombie(std::string name);
    void announce(void);
    void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string Name);

#endif
