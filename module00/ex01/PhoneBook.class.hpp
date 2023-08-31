/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:49:19 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/30 15:39:37 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook {

public:

	/** member variable */
	int	foo;

	/** Constructor */
	PhoneBook( void );
	
	/** Desctructor */
	~PhoneBook( void );

	/** member function: Add Contact */
	void	add( void );

	/** member function: Search Contact */
	void	search( void );

	/** member function: Add Contact */
	void	exit( void );

};

#endif