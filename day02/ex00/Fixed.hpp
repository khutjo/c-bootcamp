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
        int number;
        static const int litteral_8 = 8;

    public:

        fixed_numbers();
        fixed_numbers(int start_val);
        ~fixed_numbers();
        fixed_numbers(fixed_numbers &fixed_number);
        int getRawBits(void);
        void setRawBits(int const raw);
         void operator=(fixed_numbers &old_number);
        // fixed_numbers fixed_numbers::operator=(const fixed_numbers &old_number){
        // number = old_number.get_number();
};
