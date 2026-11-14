/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:47:24 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 03:26:35 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class Contact
{
	private:
		std::string _firstName;
		std::string _lastName;
		std::string	_nickname;
		int			_index;
	public:
		Contact(std::string firstName, std::string lastName);
		~Contact();
		void	printNickname();
		void	setNickname(std::string nickname);
};

#endif
