/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:31:35 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/11 16:08:12 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {

	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	_maxHitPoints = 100;
	std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void	FragTrap::highFiveGuys() {

	if (_hitPoints <= 0) {
		std::cout << "How could FragTrap " << _name << " highfive anyone, he is dead..." << std::endl;
		return ;
	}
	std::cout << "YAY ! High Five guys 👏!" << std::endl;
}