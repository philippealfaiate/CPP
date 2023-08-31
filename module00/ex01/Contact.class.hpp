/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:42:35 by phialfai          #+#    #+#             */
/*   Updated: 2023/08/31 23:40:44 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

private:

	char	*_firstname;
	char	*_lastname;
	char	*_nickname;
	char	*_phonenumber;
	char	*_darkestsecret;

public:

	/** Constructor */
	Contact( void );
	
	/** Desctructor */
	~Contact( void );

	char	*getFirstname(char *value) const;
	char	*getLastname(char *value) const;
	char	*getNickname(char *value) const;
	char	*getPhonenumber(char *value) const;
	char	*getDarkestsecret(char *value) const;

	void	setFirstname(char *value);
	void	setLastname(char *value);
	void	setNickname(char *value);
	void	setPhonenumber(char *value);
	void	setDarkestsecret(char *value);
};

#endif
