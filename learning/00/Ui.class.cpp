/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ui.class.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:25:54 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 19:01:19 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ui.class.hpp"
#include <iostream>

Ui::Ui()
{
	//
}

Ui::~Ui()
{
	//
}

void	Ui::clearScreen() const {
	std::cout << "\x1b[H\x1b[J" << std::flush;
	return ;
}

void	Ui::prompt() const {
	std::cout << std::endl << "\033[1;33m$> \033[0m" << std::flush;
	return ;
}

void	Ui::header() const {
	std::cout << "############################################################" << std::endl;
	std::cout << "#                                                          #" << std::endl;
	std::cout << "#                      PHONEBOOK 80's                      #" << std::endl;
	std::cout << "#                                                          #" << std::endl;
	std::cout << "############################################################" << std::endl;
	return ;
}

void	Ui::title(std::string value) const {
	std::cout << value << std::endl;
	return ;
}

void	Ui::printError(std::string msg) const {
	if (!msg.empty())
		std::cout << "\033[0;31mError: " << msg << "\033[0m"; //! check if endl needed 
	return ;
}

/** */
void	Ui::label(std::string value, std::string err_msg) const
{
	std::cout << value << std::flush;
	this->printError(err_msg);
	return ;
}