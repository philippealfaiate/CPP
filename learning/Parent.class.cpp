/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 09:53:16 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Parent.class.hpp"
#include "Child.class.hpp"

Parent::Parent ( void ) {

	this->id = 0;	


	std::string	name;

	std::cout << "*** Parent class constructed ***" << std::endl;

	Child	instanceChild[2];


	while (1)
	{
		std::cout << "Type your name? " << std::endl;
		std::getline(std::cin, name);
		if (std::cin.good() && !name.empty())
		{
			break;
		}
		else
		{
			std::cin.clear();
			std::cout << "Wrong data type!" << std::endl;
		}
	}
	instanceChild[0].setName( name );
	std::cout << "Your name is " << instanceChild[0].getName() << std::endl;

	// Do Something
	
	return ;
}

Parent::~Parent ( void ) {
	
	// Do Something

	std::cout << "Parent class destructed" << std::endl;
	return ;
}

void	Parent::addChild( std::string name, int age ) {
	instanceChild[id % 3].Child(name, age);	
	std::cout << "ID: " << id % 3 << std::flush;
	std::cout << " Child name: " << instanceChild[id % 3].getName() << std::endl;
	id++;
}

