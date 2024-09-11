/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 10:14:41 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/11 15:37:51 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:

	ScavTrap(std::string name);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};