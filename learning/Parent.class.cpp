/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/30 19:30:56 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Parent.class.hpp"
#include "Child.class.hpp"

Parent::Parent ( void ) {
	
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

