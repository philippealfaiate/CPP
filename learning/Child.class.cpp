/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/30 19:19:11 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Child.class.hpp"

Child::Child( void ) {

	std::cout << "Child class constructed" << std::endl;
	// Do Something

	return ;
}

Child::~Child( void ) {

	// Do Something

	std::cout << "Child class destructed" << std::endl;
	return ;
}

std::string		Child::getName( void ) const {
	return this->_name;
}

void	Child::setName( std::string name ) {
	this->_name = name;
}
