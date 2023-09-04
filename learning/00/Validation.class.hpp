/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:26:24 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 01:14:18 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Validation {

	public:
		Validation();

		int			get() const;
		void		err_msg(std::string msg) const;
	
		Validation& check(std::string value);
		Validation& isNotEmpty();
		Validation& isNumeric();
		Validation& isAlnum();
		Validation& isSpace();
		std::string	_msg;

	private:
		int			_is_valid;
		std::string	_value;

};