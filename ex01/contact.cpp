/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:59:19 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 03:30:41 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <contact.hpp>

Contact::Contact(std::string firstName, std::string lastName)
{
	std::cout << "Created contact" << std::endl;
	this->_firstName = firstName;
	this->_lastName = lastName;
}

Contact::~Contact()
{
	std::cout << "Destructed contact" << std::endl;
}

void	Contact::printNickname()
{
	std::cout << this->_nickname << std::endl;
}

void	Contact::setNickname(std::string nickname)
{
	this->_nickname = nickname;
}
