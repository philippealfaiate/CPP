/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:42:09 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/04 11:41:58 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

#include <iostream>
#include <string>
#include "Parent.class.hpp"

Parent::Parent() {
	std::cout << "Parent Constructeur: " << this << std::endl;
}

Parent::~Parent() {
	std::cout << "Parent Destructeur: " << this << std::endl;
}

void	Parent::AddChild(int id) {
	this->child_instance[id % 3].add();
}
