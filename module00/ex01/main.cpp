/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:21:11 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/31 00:04:28 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "utils.hpp"
#include "PhoneBook.class.hpp"

int	main ( void ) {
	std::string	action;
	PhoneBook	instance;

	action = "";
	clear_screen();
	header();
	std::cout << "Please type ADD, SEARCH or EXIT ..." << std::endl;
	
	
	while (action != "EXIT")
	{
		clear_screen();
		header();
		if (action == "ADD")
		{
			prompt( "Phone Book > " );
			instance.add();
		}
		else if (action == "SEARCH")
		{
			prompt( "Phone Book > " );
			std::cout << "SEARCH" << std::endl;
		}
		else if (std::cin.good() && !action.empty())
			std::cout << "Wrong action, please type ADD, SEARCH or EXIT ..." << std::endl;
		else
			std::cout << "Please type ADD, SEARCH or EXIT ..." << std::endl;
			
		std::getline(std::cin, action);
		std::cout << "Thank you for having used this awesome PhoneBook form the 80's" << std::endl;
	}
	
	return (0);
}
