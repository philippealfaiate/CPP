/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:49:19 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/01 00:53:50 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

private:

	int		_id;
	Contact	_contact[8];

public:

	/** Constructor */
	PhoneBook( void );
	
	/** Desctructor */
	~PhoneBook( void );

	/** member function: Add Contact */
	void	add( void );

	/** member function: Search Contact */
	void	search( void ) const;

	/** member function: Show Contact */
	void	print( void ) const;

	// /**  */
	// void	set_index( void );

	// /**  */
	// int		get_index( void ) const;

};

#endif