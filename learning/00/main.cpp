/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:45:37 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 18:43:41 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parent.class.hpp"
#include "Ui.class.hpp"

int	main()
{
	int		i;
	Parent	parent_instance[3];
	Ui		ui_instance;
	std::string	value;

	i = 0;
	while (1)
	{
		ui_instance.prompt();
		std::getline(std::cin, value);
		if (std::cin.good() && value == "ADD")
		{
			parent_instance[i].AddChild(0);
			std::cout << "adding child" << std::endl;
			i++;
		}
		if (std::cin.good() && value == "EXIT")
			break ;

	}
	return (0);
}