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
	system("clear");
    std::cout << "welcome to your phonebook do shit ADD, SEARCH, EXIT\n";
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
		// std::cout << "fuck";
		add_contact(contact[contact_count]);
		contact_count++;
		std::cout << "welcome to your phonebook do shit ADD, SEARCH, EXIT contact count " << contact_count << "\n";
		break;
		case 2:
		if (contact_count > 0){
			preview_phonebook(contact, contact_count);
        	show_infomation(contact, contact_count);
			std::cout << "\nwelcome back do shit ADD, SEARCH, EXIT contact count " << contact_count << "\n";
		}
		else
			preview_phonebook(contact, contact_count);
		break;
		case 0:
		// std::cout << "fuck";
		break;
		default:
		std::cout << "NO DIPSHIT that is not a command try again ADD SEARCH EXIT\n";			
		break;
		}
	}
	return (0);
}
