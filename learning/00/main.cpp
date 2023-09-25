/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:45:37 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/25 14:39:46 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parent.class.hpp"
#include "Ui.class.hpp"

int	main()
{
	int		i;
	Parent	parent_instance;
	Ui		ui_instance;
	std::string	value;

	i = 0;
	while (1)
	{
		ui_instance.clearScreen();
		ui_instance.header();
		ui_instance.home();
		ui_instance.prompt("phonebook");
		std::getline(std::cin, value);
		std::cout << value << std::endl;
		if (std::cin.good() && value == "ADD")
		{
			ui_instance.clearScreen();
			ui_instance.header();
			ui_instance.add();
			parent_instance.AddChild(i);
			std::cout << "adding child" << std::endl;
			i++;
		}
		else if (std::cin.good() && value == "SEARCH")
		{
			ui_instance.clearScreen();
			ui_instance.header();
			ui_instance.search();
			parent_instance.ChildList();
			ui_instance.prompt("phonebook: contact id");
			std::getline(std::cin, value);
		}
		else if (std::cin.good() && value == "EXIT")
			break ;
		else
		{
			ui_instance.prompt("");
			ui_instance.home();
		}
	}
	return (0);
}