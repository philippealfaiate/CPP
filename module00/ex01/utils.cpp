/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 22:25:38 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 00:51:31 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	clear_screen( void )
{
	std::cout << "\x1b[H\x1b[J" << std::flush;
	return ;
}

void	header( void )
{
	std::cout << "********************************************************" << std::endl;
	std::cout << "***                  PHONEBOOK 80's                  ***" << std::endl;
	std::cout << "********************************************************" << std::endl;
	return ;
}

void	helper( void )
{
	std::cout << "<ADD> new contact | <SEARCH> contact | <EXIT> PhoneBook" << std::endl << std::endl;
	return ;
}

void	prompt( std::string str )
{
	std::cout << str << std::flush;
	return ;
}