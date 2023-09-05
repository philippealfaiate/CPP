/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ui.class.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phialfai <phialfai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:23:02 by phialfai          #+#    #+#             */
/*   Updated: 2023/09/05 13:39:06 by phialfai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Ui
{

	public:

		Ui();
		~Ui();
		void	clearScreen() const;
		void	prompt() const;
		void	header() const;
		void	label(std::string value, std::string err_msg = 0) const;

	private:
		void	printError(std::string msg) const;

};
