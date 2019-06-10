/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sprite.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotha   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16/26/22 by ibotha        	   #+#    #+#             */
/*   Updated: 2019/06/07 16/26/22 by ibotha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Invader.hpp"
#include "Sprite.hpp"

Sprite::Sprite(){
	valid = false;
}

std::string open_file(char avetor_type){
	switch(avetor_type){
		case 'X':
			return("avetorA.avt");
		break;
		case '=':
			return("avetorB.avt");
		break;
		case  '-':
			return("avetorC.avt");
		break;
	}
	return ("what the fuck");
}

Sprite::Sprite(char file_name, int x, int y){
    std::string temp_avetor;
		std::ifstream file(open_file(file_name));
	if (!file.is_open()) exit(0);
	a_width = 0;
	a_height = 0;
	while(std::getline(file, temp_avetor)){
		if (a_width == 0)a_width = temp_avetor.length();
		a_height++;
		if (avetor.empty())avetor = temp_avetor;
		else avetor += temp_avetor;
	}
    m_width = x;
    m_height = y;
    file.close();
}

Sprite::~Sprite(){
}

Sprite::Sprite(Sprite const& src){
    avetor = src.avetor;
	a_height = src.a_height;
	a_width = src.a_width;
	m_height = src.m_height;
    m_width = src.m_width;
	valid = src.valid;
}

void Sprite::operator=(Sprite const& intance){
    avetor = intance.avetor;
	a_height = intance.a_height;
	a_width = intance.a_width;
	m_height = intance.m_height;
    m_width = intance.m_width;
	valid = intance.valid;
}

bool  Sprite::getValid(){return (valid);}
int Sprite::getWidth(){return (a_width);}
int Sprite::getHeight(){return (a_height);}

//void Sprite::map_avetor(int x, int y, WINDOW * win){
//	for(int i = 0; i < a_height; i++)
//		for (int j = 0; j < a_width; j++)
//			if ((i + x) < m_height && (j + y) < m_width){
//				//mvwaddch(win, i + x, j + y, avetor_map[i][j]);
//				valid = true;
//			}
//}


void Sprite::Draw(int x, int y, WINDOW *win){
	char avetor_map[a_height][a_width];
	int avetor_index = 0;
	for(int i = 0; i < a_height; i++)
		for(int j = 0; j < a_width; j++){
			avetor_map[i][j] = avetor[avetor_index++];
//			mvwaddch(win, i + x, j + y, avetor_map[i][j]);
		}
	for(int i = 0; i < a_height; i++)
		for (int j = 0; j < -1+a_width; j++)
			if ((i + x) < m_height && (j + y) < m_width && avetor_map[i][j] != ' '){
				mvwaddch(win, i + x, j + y, avetor_map[i][j]);
				valid = true;
			}
}



//int main(int argv, char **argc){

//	Sprite a;
//	if (argv != 2){std::cout << "you dan fucked up";return(0);}
//	a = Sprite(argc[1]);
//	if (!a.getvalid_file()){std::cout <<"not cool";return (0);}
//std::cout << "wee cool";
//	
//return (0);
//}
