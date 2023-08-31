/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:36:56 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 00:55:01 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook( void ) {
	
	// Do Something
	header();
	std::cout << "Welcome to the best PhoneBook 80's application" << std::endl;
	helper();
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	// Do Something
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