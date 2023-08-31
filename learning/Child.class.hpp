/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Child.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:09:58 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/30 19:18:30 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHILD_CLASS_H
# define CHILD_CLASS_H

class Child {

	private:

		std::string	_name;

	public:

		Child ( void );
		~Child ( void );

		void			setName( std::string name );
		std::string		getName( void ) const;
};

#endif
