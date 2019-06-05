/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_phonebook.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:47:37 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/04 14:47:38 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonelib.hpp"

  	void Save_number::setfirst_name(std::string n, int state){if(state == 0){first_name=n;}}
  	void Save_number::setlast_name(std::string n, int state){if(state == 1){last_name=n;}}
  	void Save_number::setnickname(std::string n, int state){if(state == 2){nickname=n;}}
  	void Save_number::setlogin(std::string n, int state){if(state == 3){login=n;}}
  	void Save_number::setpostal_address(std::string n, int state){if(state == 4){postal_address=n;}}
  	void Save_number::setemail_address(std::string n, int state){if(state == 5){email_address=n;}}
  	void Save_number::setphone_number(std::string n, int state){if(state == 6){phone_number=n;}}
  	void Save_number::setbirthday_date(std::string n, int state){if(state == 7){birthday_date=n;}}
  	void Save_number::setfavorite(std::string n, int state){if(state == 8){favorite=n;}}
  	void Save_number::setmeal(std::string n, int state){if(state == 9){meal=n;}}
  	void Save_number::setunderwear_color(std::string n, int state){if(state == 10){underwear_color=n;}}
  	void Save_number::setdarkest_secret(std::string n, int state){if(state == 11){darkest_secret=n;}}

	void putout(int line){
	std::string fields[12] = {"first name","last name","nickname","login",
							"postal address","email address","phone number",
							"birthday date","favorite anything","resent meal","underwear color",
							"darkest secret"};
		std::cout << "Enter you "<< fields[line] << ":  ";
	}

void bridge(Save_number *contact, std::string command, int i){
	contact->setfirst_name(command, i);
	contact->setlast_name(command, i);
	contact->setnickname(command, i);
	contact->setlogin(command, i);
	contact->setpostal_address(command, i);
	contact->setemail_address(command, i);
	contact->setphone_number(command, i);
	contact->setbirthday_date(command, i);
	contact->setfavorite(command, i);
	contact->setmeal(command, i);
	contact->setunderwear_color(command, i);
	contact->setdarkest_secret(command, i);
}

void add_contact(Save_number *contact){
	int i = 0;
	Save_number hold;
	std::string command;
	
	// std::cout << command;
// std::cout << "hello";
	while (i < 12){
		system("clear");
       std::cout << "Add Contact\n";
		putout(i);
		std::getline(std::cin, command, '\n');
		bridge(contact, command, i);
		i++;
	}
	system("clear");
	usleep(1000000);
    std::cout << "Contact Added\n";
	usleep(1000000);
	system("clear");
}
