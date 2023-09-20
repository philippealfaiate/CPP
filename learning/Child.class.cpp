/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 18:17:50 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Child.class.hpp"

Child::Child( std::string name, int age ) {

	std::cout << "Child( ... ) class constructed" << std::endl;
	// Do Something
	this->_name = name;
	this->_age = age;

	return ;
}


Child::~Child() {

	// Do Something

	std::cout << "Child class destructed " << this->_name << std::endl;
	return ;
}



std::string		Child::getName( void ) const {
	return this->_name;
}

void	Child::setName( std::string name ) {
	this->_name = name;
}

int		Child::getAge( void ) const {
	return this->_age;
}

void	Child::setAge( int age ) {
	this->_age = age;
}