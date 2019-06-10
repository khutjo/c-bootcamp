/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sprite.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotha   <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16/26/22 by ibotha        	   #+#    #+#             */
/*   Updated: 2019/06/07 16/26/22 by ibotha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPRITE_HPP
# define SPRITE_HPP
# include <iostream>
#include <fstream>
#include <ncurses.h>
/*
 *  ___
 * {000}
 *  \_/
 */

class Sprite {
	private:
		std::string avetor;
		int a_width;
		int a_height;
		int m_height;
		int m_width;
		bool valid;
	public:
		Sprite();
		Sprite(char file_name, int x, int y);
		~Sprite();
		Sprite(Sprite const &src);
		int getHeight();
		int getWidth();
		void map_avetor(int x, int y, WINDOW *win);
		void operator=(Sprite const& intance);
		// Needed
		void render(char **avetor_map, int x, int y, WINDOW *win);
		void Draw(int x, int y, WINDOW *win);
		bool getValid();
};

#endif
