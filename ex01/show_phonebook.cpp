/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_phonebook.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 07:30:16 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/05 07:30:23 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonelib.hpp"

    std::string Save_number::getfirst_name(){return(first_name);}
  	std::string Save_number::getlast_name(){return(last_name);}
  	std::string Save_number::getnickname(){return(nickname);}
  	std::string Save_number::getlogin(){return(login);}
  	std::string Save_number::getpostal_address(){return(postal_address);}
  	std::string Save_number::getemail_address(){return(email_address);}
  	std::string Save_number::getphone_number(){return(phone_number);}
  	std::string Save_number::getbirthday_date(){return(birthday_date);}
  	std::string Save_number::getfavorite(){return(favorite);}
  	std::string Save_number::getmeal(){return(meal);}
  	std::string Save_number::getunderwear_color(){return(underwear_color);}
  	std::string Save_number::getdarkest_secret(){return(darkest_secret);}

    void lines(){
        for(int i = 0; i < 100; i++){
            std::cout << "-";
        }
            std::cout << "\n";
    }

    void contact_contacts(Save_number *contact){
        std::cout << "first name " << contact->getfirst_name() << "\n";
        std::cout << "last name " << contact->getlast_name() << "\n";
        std::cout << "nickname " << contact->getnickname() << "\n";
        std::cout << "login " << contact->getlogin() << "\n";
        std::cout << "postal address " << contact->getpostal_address() << "\n";
        std::cout << "email address " << contact->getemail_address() << "\n";
        std::cout << "phone number " << contact->getphone_number() << "\n";
        std::cout << "birthday date " << contact->getbirthday_date() << "\n";
        std::cout << "favorite anything " << contact->getfavorite() << "\n";
        std::cout << "resent meal " << contact->getmeal() << "\n";
        std::cout << "underwear color " << contact->getunderwear_color() << "\n";
        std::cout << "darkest secret " << contact->getdarkest_secret() << "\n";
    }

    void show_infomation(Save_number **contact, int contact_count){
        std::string command;
        int place;
        std::cout << "\n--- which contact do you want to view   enter number 1 - " << 1+contact_count << " ---\n";
		std::getline(std::cin, command, '\n');
        if (command[0]){
            place = command[0] - '0';
            if (place > 0 || place <= contact_count){
                contact_contacts(contact[--place]);
            }
        }
    }

void preview_phonebook(Save_number **contact, int contact_count){
    int i = 0;

    if (contact_count == 0)
        std::cout << "sorry you dont have any contacts get some then you can comeback\n";
    while (i < contact_count){
        lines();
        std::cout << 1+i << "\t" << contact[i]->getfirst_name() << "\t" << contact[i]->getlast_name() << "\n";
        i++;
    }
}
