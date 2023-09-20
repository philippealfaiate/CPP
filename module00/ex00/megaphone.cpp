/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:22:20 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/20 18:05:37 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	pp_upper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

int	main(int argc, char *argv[])
{
	argv += 1;
	while (*argv)
	{
		while (**argv)
		{	std::cout << pp_upper(**argv);
			(*argv)++;
		}
		if (*(argv + 1))
			std::cout << std::flush;
		argv++;
	}
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
