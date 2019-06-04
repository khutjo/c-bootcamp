/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:46:25 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/04 14:46:26 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonelib.hpp"

int run_phonebook(){
	int i = 0;
	std::string exit = "EXIT";
	std::string ADD = "ADD";
	std::string SEARCH = "SEARCH";
	std::string command;
	std::getline(std::cin, command);
	
	// std::cout << command;
	while (command[i] == exit[i] && command[i] && exit[i])
		i++;
	if (!exit[i] && !command[i])
		return (0);

	while (command[i] == ADD[i] && command[i] && ADD[i])
		i++;
	if (!ADD[i] && !command[i])
		return (1);

	while (command[i] == SEARCH[i] && command[i] && SEARCH[i])
		i++;
	if (!SEARCH[i] && !command[i])
		return (2);
	
	return (3);
}