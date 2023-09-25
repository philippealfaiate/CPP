/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:42:09 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/25 14:38:52 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include <iostream>
#include <string>
#include "Parent.class.hpp"

Parent::Parent() {
	std::cout << "Parent Constructeur: " << this << std::endl;
}

Parent::~Parent() {
	std::cout << "Parent Destructeur: " << this << std::endl;
}

void	Parent::AddChild(int id) {
	this->child_instance[id % 3].add();
}

void	Parent::ChildList() const {
	int	i;
	std::cout << "#";
	std::cout << "     index";
	std::cout << "|";
	std::cout << "first name";
	std::cout << "|";
	std::cout << " last name";
	std::cout << "|";
	std::cout << "  nickname";
	std::cout << "#" << std::endl;
	
	std::cout << "#----------|----------|----------|----------#" << std::endl;

	i = 0;
	while (i < 8)
	{
		std::cout << "#         " << i << "|";
		std::cout << child_instance[i].getFirstName() << "|";
		std::cout << child_instance[i].getLastName() << "|";
		std::cout << child_instance[i].getAge() << "#";
		std::cout << std::endl;
		i++;
	}
	std::cout << "#############################################" << std::endl;
};
