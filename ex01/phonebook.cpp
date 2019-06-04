/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 09:49:03 by event             #+#    #+#             */
/*   Updated: 2019/06/04 13:41:03 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonelib.hpp"



int main(){
	int i = 0;
	int contact_count = 0;
	Save_number *contact[8];
	//contact = new Save_number();
	while (i < 9){
		contact[i] = new Save_number;
		i++;
	}
	i = 1;
	while(i > 0){
		i = run_phonebook();
		switch (i){
		case 1:
		add_contact(contact[contact_count]);
		putout(i);
		contact_count++;
		// std::cout << "fuck";
		break;
		case 2:
		// std::cout << "fuck";
		
		break;
		}
	}
	return (0);
}
