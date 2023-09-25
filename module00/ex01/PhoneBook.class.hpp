/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:49:19 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/25 18:39:16 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.class.hpp"

class PhoneBook {

private:

	int		_id;
	// Contact	_contact[8];

public:

	/** Constructor */
	PhoneBook( void );
	
	/** Desctructor */
	~PhoneBook( void );

	/** */
	void	welcome( void );

	/** member function: Add Contact */
	void	add( void );

	/** member function: Search Contact */
	void	search( void ) const;

	/** member function: Show Contact */
	void	print( void ) const;
};

#endif