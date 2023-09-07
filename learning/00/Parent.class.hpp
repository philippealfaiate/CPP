/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parent.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:39:27 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 18:55:51 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARENT_CHILD_H
#define PARENT_CHILD_H

	#include "Child.class.hpp"

	class Parent
	{
		public:

			/** Constructeur */
			Parent();

			/** Destructeur */
			~Parent();

			void AddChild(int id);

		private:

			Child		child_instance[3];
	};

#endif
