/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:05:49 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 01:31:39 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Child.class.hpp"
#include "Validation.class.hpp"

void	clear_screen( void )
{
	std::cout << "\x1b[H\x1b[J" << std::flush;
	return ;
}

void	prompt( void )
{
	std::cout << std::endl << "\033[1;33m$> \033[0m" << std::flush;
	return ;
}


Child::Child() {
	std::cout << "Child Constucteur: " << this << std::endl;
}

Child::~Child() {
	std::cout << "Child Destucteur: " << this << std::endl;
}

/** */
void	Child::setFirstName() {
	Validation	validate;
	while (1)
	{
		clear_screen();
		this->label("First Name: ");
		std::getline(std::cin, this->_first_name);
		if (std::cin.good() && validate.check(this->_first_name).isNotEmpty().get())
			break;
	}
}

/** */
void	Child::setLastName() {
	Validation	validate;
	while (1)
	{
		clear_screen();
		this->label("Last Name: ");
		if (!validate.get())
			std::cout << "\033[0;31mError: " << validate._msg << "\033[0m";
		prompt();
		std::getline(std::cin, this->_last_name);
		if (std::cin.good() && validate.check(this->_last_name).isNotEmpty().get())
			break;
	}
}

/** */
void	Child::setAge() {
	Validation	validate;
	while (1)
	{
		clear_screen();
		this->label("Age: ");
		std::getline(std::cin, this->_age);
		if (std::cin.good() && validate.check(this->_age).isNotEmpty().isNumeric().get())
			break;
	}
}

/** */
void	Child::label(std::string value) const
{
	std::cout << value << std::flush;
}

std::string	Child::getName() const {
	// std::cout << this->_first_name << " " << this->_last_name << std::endl;
	// std::cout << _first_name << " " << _last_name << std::endl;
	return this->_first_name + " " + this->_last_name;
};

std::string	Child::getAge() const {
	return this->_age;
};


void	Child::print() const {
	std::cout << this->getName() << " (" << this->getAge() << " years old) created" << std::endl;
}

void	Child::add() {

	std::cout << "Adding a new child instance ..." << std::endl;
	this->setFirstName();
	std::cout << std::endl;
	this->setLastName();
	std::cout << std::endl;
	this->setAge();
	std::cout << std::endl;
	this->print();

};