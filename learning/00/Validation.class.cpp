/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:26:24 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 13:45:22 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Validation.class.hpp"
#include <string>
#include <iostream>

Validation::Validation()
{
	//
}

Validation& Validation::check(std::string value)
{
	this->_is_valid = 1;	//! obso
	this->_value = value;
	this->_err_msg.clear();
	return *this;
}

int	Validation::get() const
{
	return this->_is_valid;
}

std::string	Validation::getErrMsg() const {
	return this->_err_msg;
}

Validation& Validation::isNotEmpty()
{
	if (this->_value.empty())
	{
		this->_is_valid = 0;
		this->_err_msg = "can't be empty";
	}
	return *this;
}


/**
 * https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
*/
Validation& Validation::isNumeric()
{
	std::string::iterator it = this->_value.begin();	
	while (it != this->_value.end())
	{
		if (!std::isdigit(*it))
		{
			this->_is_valid = 0;
			this->_err_msg = "should be numeric";
		}
		++it;
	}
	return *this;
}

/**
 * https://stackoverflow.com/questions/4654636/how-to-determine-if-a-string-is-a-number-with-c
*/
Validation& Validation::isAlnum()
{
	// if (!std::all_of(this->_value.begin(), this->_value.end(), ::isalnum))
	// {
	// 	this->_is_valid = 0;
	// 	this->err_err_msg("should be alphanumeric");
	// }
	return *this;
}
