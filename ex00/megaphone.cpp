/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 01:52:17 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 02:20:56 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ostream>
#include <cstddef>
#include <iostream>

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (size_t i = 1; i < (size_t)ac; i++)
		str += std::string(av[i]);
	for (size_t j = 0; j < str.length(); j++)
		str[j] = std::toupper(str[j]);
	std::cout << str << std::endl;
	return (0);
}
