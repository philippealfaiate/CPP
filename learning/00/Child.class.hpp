/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 11:03:51 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 13:26:26 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHILD_CLASS_H
# define CHILD_CLASS_H

# include <string>

	class Child
	{

		public:

			Child();
			~Child();

			void	setFirstName(std::string value);
			void	setLastName(std::string value);
			void	setAge(std::string value);

			void	print() const;
			
			std::string	getName() const;
			std::string	getAge() const;

			void	add();

		private:

			std::string	_first_name;
			std::string	_last_name;
			std::string	_age;

	};

#endif
