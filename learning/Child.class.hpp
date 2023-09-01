/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 09:45:04 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHILD_CLASS_H
# define CHILD_CLASS_H

class Child {

	private:

		std::string	_name;
		int			_age;

	public:

		Child ( void );
		Child (std::string name, int age);
		~Child ( void );

		std::string		getName( void ) const;
		void			setName( std::string name );

		int				getAge( void ) const;
		void			setAge( int age );
};

#endif
