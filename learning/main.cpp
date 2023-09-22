/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:22:42 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/22 22:34:46 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parent.class.hpp"

int	main ( void )
{

	Parent	instanceParent;

	instanceParent.addChild("Sam", 12);
	instanceParent.addChild("Julie", 23);
	instanceParent.addChild("Laeti", 34);
	instanceParent.addChild("Victor", 45);

	return (0);
}