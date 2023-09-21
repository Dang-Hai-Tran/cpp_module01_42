/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: datran <datran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:34:55 by datran            #+#    #+#             */
/*   Updated: 2023/09/20 17:36:59 by datran           ###   ########.fr       */
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
};

#endif
