/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grivault <grivault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 03:14:09 by grivault          #+#    #+#             */
/*   Updated: 2026/11/14 03:31:05 by grivault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <contact.hpp>
#include <cstddef>

int	main(void)
{
	Contact	contact1("Gabin", "Rivault");
	contact1.setNickname("GPR");
	contact1.printNickname();
	return (0);
}
