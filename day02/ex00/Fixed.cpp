/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:33:29 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/06 08:33:30 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Fixed.hpp"

//Default constructor
fixed_numbers::fixed_numbers(){
    number = 0;
    std::cout << "Default constructor called\n";
}
//copy constructor.
fixed_numbers::fixed_numbers(fixed_numbers &fixed_number){
    std::cout << "Copy constructor called\n";
    number = fixed_number.getRawBits();
}
//overload constructor
fixed_numbers::~fixed_numbers(){
    number = 0;
    std::cout << "Destructor called\n";}
//destructor
fixed_numbers::fixed_numbers(int start_val){
    number=start_val;
    }
//number setter
void fixed_numbers::setRawBits(int const raw){
    number=raw;
    }
//number getter
int fixed_numbers::getRawBits(void){
    std::cout << "getRawBits member function called\n";
    return (number);
    }
//assignation operator overload
void fixed_numbers::operator=(fixed_numbers &old_number){
    std::cout << "Assignation operator called\n";

    number = old_number.getRawBits();
}


int main( void ) {
fixed_numbers a;
// a.set_number(1);
fixed_numbers b( a );
fixed_numbers c;
c = b;

std::cout << a.getRawBits() << std::endl;
// // std::cout << c.get_number();
std::cout << b.getRawBits() << std::endl;
std::cout << c.getRawBits() << std::endl;
return 0;
}
