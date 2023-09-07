/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ui.class.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:23:02 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 18:56:59 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _UI_H_
#define _UI_H_

	#include <iostream>

	class Ui
	{

		public:

			Ui();
			~Ui();
			void	clearScreen() const;
			void	prompt() const;
			void	header() const;
			void	title(std::string value) const;
			void	label(std::string value, std::string err_msg) const;

		private:
			void	printError(std::string msg) const;

	};

#endif
