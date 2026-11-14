/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 19:48:05 by grivault          #+#    #+#             */
/*   Updated: 2026/11/15 00:20:53 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Phonebook.hpp>
#include <iomanip>

Phonebook::Phonebook()
{
	this->_index = 0;
	this->_count = 0;
}

Phonebook::~Phonebook()
{
}

void	Phonebook::_incrementIndex()
{
	if (this->_index == 7)
		this->_index = 0;
	else
		this->_index++;
	if (this->_count < 8)
		this->_count++;
}

bool		Phonebook::_isOnlyWhitespaces(const std::string str)
{
	for (size_t i = 0; i < str.length(); i++) {
		if (str[i] != ' ' && str[i] != '\t')
			return (false);
	}
	return (true);
}

std::string	Phonebook::_formatColumn(const std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + '.');
	return (str);
}

std::string	Phonebook::_getValidInput(const std::string prompt)
{
	std::string	input;

	while (true) {
		std::cout << prompt;
		if (!std::getline(std::cin, input)) {
			std::cout << "EOF detected, exiting phonebook." << std::endl;
			std::exit(0);
		}
		if (!input.empty() && !this->_isOnlyWhitespaces(input))
			return (input);
		std::cout << "Error: A contact field cannot be empty. Please try again" << std::endl;
	}
}

void	Phonebook::addContact()
{
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;

	firstName = this->_getValidInput("First Name: ");
	lastName = this->_getValidInput("Last Name: ");
	nickName = this->_getValidInput("Nickname: ");
	phoneNumber = this->_getValidInput("Phone Number: ");
	darkestSecret = this->_getValidInput("Darkest Secret: ");

	this->_contacts[this->_index].setFirstName(firstName);
	this->_contacts[this->_index].setLastName(lastName);
	this->_contacts[this->_index].setNickName(nickName);
	this->_contacts[this->_index].setPhoneNumber(phoneNumber);
	this->_contacts[this->_index].setDarkestSecret(darkestSecret);
	_incrementIndex();
}

void	Phonebook::searchContact()
{
	std::string	input;
	int			idx;

	std::cout << "|" << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "|" << std::endl;

	if (this->_count == 0) {
		std::cout << "No contact saved." << std::endl;
		return ;
	}
	for (size_t i = 0; i < this->_count; i++) {
		std::cout << "|" << std::setw(10) << i << "|"
				  << std::setw(10) << this->_formatColumn(this->_contacts[i].getFirstName()) << "|"
				  << std::setw(10) << this->_formatColumn(this->_contacts[i].getLastName()) << "|"
				  << std::setw(10) << this->_formatColumn(this->_contacts[i].getNickName()) << "|" << std::endl;
	}
	while (true)
	{
		std::cout << "Enter the index of the contact to display: ";
		if (!std::getline(std::cin, input)) {
			std::cout << "EOF detected, exiting phonebook." << std::endl;
			std::exit(0);
		}
		if (input.length() != 1 || input[0] < '0' || input[0] >= (this->_count + '0')) {
			std::cout << "Please enter a valid index." << std::endl;
			continue ;
		}
		idx = input[0] - '0';
		this->_contacts[idx].displayContact();
		break ;
	}
}
