/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:36:56 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/31 00:40:50 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"
#include "utils.hpp"

PhoneBook::PhoneBook( void ) {
	
	// Do Something
	return;
}

PhoneBook::~PhoneBook( void ) {
	
	// Do Something
	return;
}

void	PhoneBook::add ( void ) {

	std::string	value;
	Contact		contact;

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

void	PhoneBook::search ( void ) {

	// Do Something
	return;
}


void	PhoneBook::exit ( void ) {

	// Do Something
	return;
}
