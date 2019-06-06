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
#include <cmath>
#include <iomanip>
#include "Fixed.hpp"

//Default constructor
fixed_numbers::fixed_numbers(){
    float_number = 0;
    std::cout << "Default constructor called\n";
}


// int count(int num){
//     int i = 0;
//     // std::cout << num << "  \n";
//     while (num){
//         num /= 10;
//         i++;
//     }
//     return(i);
// }

//overload constructor
fixed_numbers::fixed_numbers(int set_int_val){
    float_number=(float)set_int_val;
}
//overload constructor
fixed_numbers::fixed_numbers(float set_float_val){
    // while (count(roundf(u)) < 6){
    //     u *= 10;   
    // }
    // k = count(roundf(u));
    // std::cout << j << "  -  " << k << "  -  " <<i << "\n";
    // std::cout << std::fixed << std::setprecision(6 - j) << i << std::endl;

    float_number=set_float_val;
}
//number getter
float fixed_numbers::getRawBits(void){
    return (float_number);
}
//copy constructor.
fixed_numbers::fixed_numbers(fixed_numbers &fixed_number){
    std::cout << "Copy constructor called\n";
    float_number = fixed_number.getRawBits();
}
//destructor
// fixed_numbers::~fixed_numbers(){
//     number = 0;
//     std::cout << "Destructor called\n";}
// //number setter
// void fixed_numbers::setRawBits(int const raw){
//     number=raw;
//     }
//assignation operator overload
float fixed_numbers::operator=(fixed_numbers &old_number){
    std::cout << "Assignation operator called\n";
    return (old_number.getRawBits());
}

int count(int num){
    int i = 0;
    std::cout << num << "  \n";
    while (num){
        num /= 10;
        i++;
    }
    return(i);
}

int main( void ) {
    float i = 1234.4321f;
    float ii =  42.42f;
    int iii = ((int)42.42f * 1) % 10;
    // int j = count(roundf(i));
    // int k;
    // int o = 10;
    // float u = (double)i;
    
    // while (count(roundf(u)) < 6){
    //     u *= 10;   
    // }
    // k = count(roundf(u));
    // std::cout << j << "  -  " << k <  < "  -  " <<i << "\n";
 
    std::cout << iii << "\n ";
    std::cout << (std::floor(i*100000))/100000;
    std::cout << (std::floor(ii*100000))/100000;
    // std::cout << std::fixed << std::setprecision(6 - j) << i << std::endl;
    // std::cout << std::roundf(42.42f);
    // std::cout << j;
// fixed_numbers a;
// fixed_numbers const b( 10 );
// fixed_numbers const c( 42.42f );
// fixed_numbers const d( b );
// a = fixed_numbers( 1234.4321f );
// std::cout << "a is " << a << std::endl;
// std::cout << "b is " << b << std::endl;
// std::cout << "c is " << c << std::endl;
// std::cout << "d is " << d << std::endl;
// std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}


// int main(void)
// {
//     float testme[] = { 0.12345, 1.2345, 12.345, 123.45, 1234.5, 12345 };

//     std::cout << std::setprecision(4) << std::fixed;

//     for(int i = 0; i < 6; ++i)
//     {
//         std::cout << testme[i] << std::endl;
//     }

//     return 0;
// }