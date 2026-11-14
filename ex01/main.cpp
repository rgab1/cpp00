/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 03:14:09 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 22:12:50 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <Phonebook.hpp>
#include <cstddef>

int	main(void)
{
	std::string	str;
	Phonebook 	phonebook;

	while (true)
	{
		str = "";
		std::cout << "Enter a command (ADD, SEARCH, EXIT)." << std::endl;
		if (!std::getline(std::cin, str))
		{
			std::cout << "EOF detected, exiting." << std::endl;
			break;
		}
		if (str == "ADD")
			phonebook.addContact();
		else if (str == "SEARCH")
			phonebook.searchContact();
		else if (str == "EXIT")
			return (0);
		else
			std::cout << "Unknown command." << std::endl;
	}
	return (0);
}
