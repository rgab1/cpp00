/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:48:16 by grivault          #+#    #+#             */
/*   Updated: 2026/11/15 00:17:37 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <string>
# include <iostream>
# include <Contact.hpp>

class Phonebook
{
	private:
		Contact _contacts[8];
		int		_index;
		int		_count;

		void		_incrementIndex();
		std::string	_formatColumn(const std::string str);
		std::string	_getValidInput(const std::string prompt);
		bool		_isOnlyWhitespaces(const std::string str);
	public:
		Phonebook();
		~Phonebook();
		
		void	addContact();
		void	searchContact();
};

#endif
