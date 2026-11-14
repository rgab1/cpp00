/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 02:59:19 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 23:29:42 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Contact.hpp>
#include <iomanip>

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(const std::string str)
{
	this->_firstName = str;
}

void	Contact::setLastName(const std::string str)
{
	this->_lastName = str;
}

void	Contact::setNickName(const std::string str)
{
	this->_nickName = str;
}

void	Contact::setPhoneNumber(const std::string str)
{
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret(const std::string str)
{
	this->_darkestSecret = str;
}

std::string	Contact::getFirstName()
{
	return (this->_firstName);
}

std::string	Contact::getLastName()
{
	return (this->_lastName);
}

std::string	Contact::getNickName()
{
	return (this->_nickName);
}

std::string	Contact::getPhoneNumber()
{
	return (this->_phoneNumber);
}

std::string	Contact::getDarkestSecret()
{
	return (this->_darkestSecret);
}

void	Contact::displayContact()
{
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickName << std::endl;
	std::cout << "Phone number: " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
}
