/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:05:49 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/22 19:16:03 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Child.class.hpp"
#include "Validation.class.hpp"
#include "Ui.class.hpp"

Child::Child() {
	std::cout << "Child Constucteur: " << this << std::endl;
}

Child::~Child() {
	std::cout << "Child Destucteur: " << this << std::endl;
}

/** */
void	Child::setFirstName(std::string value) {
	this->_first_name = value;
}

/** */
void	Child::setLastName(std::string value) {
	this->_last_name = value;
}

/** */
void	Child::setAge(std::string value) {
	this->_age = value;
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

	Ui			ui;
	Validation	validate;
	std::string	value;

	// First Name
	while(1)
	{
		// ui.clearScreen();
		// ui.header();
		ui.label("First Name: ", validate.getErrMsg());
		// if (!validate.get())
		// 	ui.printError(validate.getErrMsg());
		ui.prompt("");
		std::getline(std::cin, value);
		if (std::cin.good() && validate.check(value).isNotEmpty().get())
		{
			this->setFirstName(value);
			value.clear();
			break;
		}
	}

	// last Name
	while(1)
	{
		ui.clearScreen();
		ui.header();
		ui.label("Last Name: ", validate.getErrMsg());
		// if (!validate.get())
		// 	ui.printError(validate.getErrMsg());
		ui.prompt("");
		std::getline(std::cin, value);
		if (std::cin.good() && validate.check(value).isNotEmpty().get())
		{
			this->setLastName(value);
			value.clear();
			break;
		}
	}
	

	// Age
	while(1)
	{
		ui.clearScreen();
		ui.header();
		ui.label("Age: ", validate.getErrMsg());
		// if (!validate.get())
		// 	ui.printError(validate.getErrMsg());
		ui.prompt("");
		std::getline(std::cin, value);
		if (std::cin.good() && validate.check(value).isNotEmpty().isNumeric().get())
		{
			this->setAge(value);
			value.clear();
			break;
		}
	}

	std::cout << std::endl;
	// this->setLastName();
	// std::cout << std::endl;
	// this->setAge();
	// std::cout << std::endl;
	// this->print();

};