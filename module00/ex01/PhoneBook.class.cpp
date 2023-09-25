/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:36:56 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/25 18:19:31 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook( void ) {
	
	int	limit = 3;

	std::string	value;


	std::cout << "Welcome to the best PhoneBook 80's application" << std::endl;
	std::cout << "Type ADD | SEARCH | EXIT" << std::endl;

	this->_id = 0;

	while (1)
	{
		std::cout << "$ > ";
		std::getline(std::cin, value);
		if (std::cin.good() && value == "ADD")
		{
			if (this->_id > limit - 1)
			{
				std::cout << "Override id " << (this->_id % limit) << "? (Y|n) > ";
				std::getline(std::cin, value);
				if (std::cin.good() && value == "n")
					break ;
			}
			std::cout << "ADD: " << (this->_id % limit) << " / " << this->_id << std::endl;
			this->_id++;
		}
		if (std::cin.good() && value == "SEARCH")
			std::cout << "SEARCH" << std::endl;
		if (std::cin.good() && value == "EXIT")
			break ;
	}

	return;
}

PhoneBook::~PhoneBook( void ) {
	
	
	std::cout << "Bye! :)" << this->_id <<std::endl;
	return;
}

void	PhoneBook::add ( void ) {

	std::string	value;

	

	value = "";
	// Do Something
	std::cout << "Add a new contact" << std::endl;

	std::cout << "First Name: " << std::flush;
	std::cin >> value;
	std::getline(std::cin, value);

	std::cout << "Last Name: " << std::flush;
	std::cin >> value;
	std::getline(std::cin, value);

	std::cout << "Nickname: " << std::flush;
	std::cin >> value;
	std::getline(std::cin, value);

	std::cout << "Phone Number: " << std::flush;
	std::cin >> value;
	std::getline(std::cin, value);

	std::cout << "Darkest Secret: " << std::flush;
	std::cin >> value;
	std::getline(std::cin, value);

	return;
}

void	PhoneBook::search ( void ) const {
	int	id;

	// Do Something
	std::cout << "(select an index or type enter to go back to the main menu)" << std::endl;
	std::cin >> id;

	
	
	return;
}


void	PhoneBook::print ( void ) const {

	// Do Something
	return;
}


// /**  */
// void	PhoneBook::set_index( void ) {
// 	this->_index++;
// }

// /**  */
// int		PhoneBook::get_index( void ) const {
// 	return this->_index % 8;
// }