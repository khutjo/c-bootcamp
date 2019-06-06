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

    void line(){
        for(int i = 0; i < 45; i++){
            std::cout << "-";
        }
            std::cout << "\n";
    }

    void lines(){
        for(int i = 0; i < 133; i++){
            std::cout << "-";
        }
            std::cout << "\n";
    }

    void contact_contacts(Save_number *contact){
        lines();
        std::cout << "|first name| last name|  nickname|     login|postal add| email add|  phone no|  birthday|  favorite| last meal|undezcolor|darksecret|\n";
        lines();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getfirst_name();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getlast_name();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getnickname();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getlogin();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getpostal_address();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getemail_address();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getphone_number();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getbirthday_date();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getfavorite();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getmeal();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getunderwear_color();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << contact->getdarkest_secret() << "|\n";
        lines();
    }

    void show_infomation(Save_number **contact, int contact_count){
        std::string command;
        int place;
        if (contact_count == 1)
            std::cout << "\n--- you dont really have a choice enter 1 ---\n";
        else
            std::cout << "\n--- which contact do you want to view   enter number 1 - " << contact_count << " ---\n";
		std::getline(std::cin, command, '\n');
        if (command[0] && !command[1]){
             place = command[0] - '0';
            if (place > 0 && place <= contact_count){
                 contact_contacts(contact[--place]);
            }
            else std::cout << "NOPED NOPE";
        }
        else std::cout << "NOPED NOPE";        
    }

void preview_phonebook(Save_number **contact, int contact_count){
    int i = 0;

    if (contact_count == 0)
        std::cout << "sorry you dont have any contacts get some then you can comeback\n";
    while (i < contact_count){
        line();
        std::cout << "|Contact no|First Name| Last Name|  NickName|\n";
        line();
        std::cout << "|" << std::setfill(' ') << std::setw(10) << 1+i;
        std::cout << "|" << std::setfill(' ') << std::setw(10) <<contact[i]->getfirst_name();
        std::cout << "|" << std::setfill(' ') << std::setw(10) <<contact[i]->getlast_name();
        std::cout << "|" << std::setfill(' ') << std::setw(10) <<contact[i]->getnickname();
        std::cout << "|\n";
        line();
        // std::cout << 1+i << "\t" << contact[i]->getfirst_name() << "\t" << contact[i]->getlast_name() << "\n";
        i++;
    }
}
