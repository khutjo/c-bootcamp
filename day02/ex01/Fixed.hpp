/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaputla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 08:33:37 by kmaputla          #+#    #+#             */
/*   Updated: 2019/06/06 08:33:40 by kmaputla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class fixed_numbers{

    private:
        // int int_number;
        float float_number;
        static const int litteral_8 = 8;

    public:

        fixed_numbers();
        fixed_numbers(int set_int_val);
        fixed_numbers(float set_float_val);
        ~fixed_numbers();
        fixed_numbers(fixed_numbers &fixed_number);
        float getRawBits(void);
        void setRawBits(int const raw);
        float operator=(fixed_numbers &old_number);
        // fixed_numbers fixed_numbers::operator=(const fixed_numbers &old_number){
        // number = old_number.get_number();
};
