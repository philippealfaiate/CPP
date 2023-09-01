/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 09:47:45 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARENT_CLASS_H
# define PARENT_CLASS_H

# include <iostream>
# include "Child.class.hpp"

class Parent {

	public:

		Parent ( void );
		~Parent ( void );

		void	addChild( std::string name, int age );

		Child	instanceChild[3];
		int		id;
};

#endif
