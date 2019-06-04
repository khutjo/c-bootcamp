/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:27:47 by event             #+#    #+#             */
/*   Updated: 2019/06/04 09:45:23 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main(int argc, char **argv){
	int i = 1;
	int j = 0;

	if (argc == 1){
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return (0);
	}

	while (argc > i){
		j = 0;
		while (argv[i][j]){
			std::cout << (char)toupper(argv[i][j++]);
		}
		i++;
	}
	std::cout << '\n';
	return (0);
}
