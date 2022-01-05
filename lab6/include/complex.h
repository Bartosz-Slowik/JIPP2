//
// Created by ASUS on 15.11.2021.
//

#ifndef JIPP2_COMPLEX_H
#define JIPP2_COMPLEX_H

#include <iostream>

class complex {
private:
    double re;
    double im;
public:
    complex(double re, double im);
    friend void print(complex &c);
    complex complex::operator+(const complex &rhs) ;
        complex complex::operator-(const complex &rhs) ;
            complex complex::operator*(const complex &rhs) ;

};


#endif //JIPP2_COMPLEX_H
