/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdaignea <gdaignea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:32:11 by gdaignea          #+#    #+#             */
/*   Updated: 2024/09/12 14:58:32 by gdaignea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {

	public:
	
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();

	FragTrap&	operator=(FragTrap const & rhs);

	void	highFiveGuys();
};