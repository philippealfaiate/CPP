/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:26:24 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 01:27:36 by phialfai         ###   ########.fr       */
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
	this->_is_valid = 1;
	this->_value = value;
	return *this;
}

int	Validation::get() const
{
	return this->_is_valid;
}

void	Validation::err_msg(std::string msg) const
{
	std::cout << "\033[0;31mError: " << msg << "\033[0m";
}

Validation& Validation::isNotEmpty()
{
	if (this->_value.empty())
	{
		this->_is_valid = 0;
		this->_msg = "can't be empty";
		this->err_msg("can't be empty");
	}
	return *this;
}

Validation& Validation::isNumeric()
{
	if (!std::all_of(this->_value.begin(), this->_value.end(), ::isdigit))
	{
		this->_is_valid = 0;
		this->err_msg("should be numeric");
	}
	return *this;
}

Validation& Validation::isAlnum()
{
	if (!std::all_of(this->_value.begin(), this->_value.end(), ::isalnum))
	{
		this->_is_valid = 0;
		this->err_msg("should be alphanumeric");
	}
	return *this;
}
