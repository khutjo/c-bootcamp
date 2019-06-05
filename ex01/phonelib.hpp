/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonelib.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:02:34 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/04 13:27:24 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONELIB_
#define _PHONELIB_

#include <iostream>
#include <string>
#include <stdlib.h>
#include <unistd.h>

class Save_number{

	public:
  	// string get(){return first_name;)
  	void setfirst_name(std::string n, int stat);
  	void setlast_name(std::string n, int stat);
  	void setnickname(std::string n, int stat);
  	void setlogin(std::string n, int stat);
  	void setpostal_address(std::string n, int stat);
  	void setemail_address(std::string n, int stat);
  	void setphone_number(std::string n, int stat);
  	void setbirthday_date(std::string n, int stat);
  	void setfavorite(std::string n, int stat);
  	void setmeal(std::string n, int stat);
  	void setunderwear_color(std::string n, int stat);
  	void setdarkest_secret(std::string n, int stat);
	


    std::string getfirst_name();
  	std::string getlast_name();
  	std::string getnickname();
  	std::string getlogin();
  	std::string getpostal_address();
  	std::string getemail_address();
  	std::string getphone_number();
  	std::string getbirthday_date();
  	std::string getfavorite();
  	std::string getmeal();
  	std::string getunderwear_color();
  	std::string getdarkest_secret();


	
	private:

	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	login;
	std::string	postal_address;
	std::string	email_address;
	std::string	phone_number;
	std::string	birthday_date;
	std::string	favorite;
	std::string	meal;
	std::string	underwear_color;
	std::string	darkest_secret;
	


};
	void lines();
	void show_infomation(Save_number **contact, int contact_count);
	void preview_phonebook(Save_number **contact, int contact_count);
	int run_phonebook();
	void putout(int line);
	void add_contact(Save_number *contact);
#endif
