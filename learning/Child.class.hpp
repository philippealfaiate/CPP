/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/02 14:16:47 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHILD_CLASS_H
# define CHILD_CLASS_H

class Child {

	private:

		std::string	_name;
		int			_age;

	public:

		Child () = delete;
		Child (std::string name, int age);
		~Child ();

		std::string		getName( void ) const;
		void			setName( std::string name );

		int				getAge( void ) const;
		void			setAge( int age );

		void create(std::string name, int age)
		{
			this->setName(name);
			this->setAge(age);
			return;
		}
};

#endif
