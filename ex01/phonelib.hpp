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

class Save_number{

	public:
  	// string get(){return first_name;)
  	void Save_number::setfirst_name(std::string n, int stat);
    void Save_number::setfirst_name(std::string n, int stat);
  	void Save_number::setlast_name(std::string n, int stat);
  	void Save_number::setnickname(std::string n, int stat);
  	void Save_number::setlogin(std::string n, int stat);
  	void Save_number::setpostal_address(std::string n, int stat);
  	void Save_number::setemail_address(std::string n, int stat);
  	void Save_number::setphone_number(std::string n, int stat);
  	void Save_number::setbirthday_date(std::string n, int stat);
  	void Save_number::setfavorite(std::string n, int stat);
  	void Save_number::setmeal(std::string n, int stat);
  	void Save_number::setunderwear_color(std::string n, int stat);
  	void Save_number::setdarkest_secret(std::string n, int stat);
	  
	
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
	int run_phonebook();
	void putout(int line);
	void add_contact(Save_number *contact);
#endif
