/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Validation.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:26:24 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 18:55:33 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VALIDATION_H
#define VALIDATION_H

	#include <string>

	class Validation
	{

		public:
			Validation();

			int			get() const;
			std::string	getErrMsg() const;
		
			Validation& check(std::string value);
			Validation& isNotEmpty();
			Validation& isNumeric();
			Validation& isAlnum();
			Validation& isSpace();

		private:
			int			_is_valid;
			std::string	_err_msg;
			std::string	_value;

	};

#endif
