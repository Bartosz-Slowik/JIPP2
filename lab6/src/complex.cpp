//
// Created by ASUS on 15.11.2021.
//

#include "complex.h"

using namespace std;

complex::complex(double re, double im) : re(re), im(im){}
 void print(complex &c){
    cout<<c.re<< ' ';
    cout<<c.im<<"i ";
}
complex complex::operator+(const complex &rhs) {
    return complex(re + rhs.re, im + rhs.im);
}
complex complex::operator-(const complex &rhs) {
    return complex(re - rhs.re, im - rhs.im);
}
complex complex::operator*(const complex &rhs) {
    return complex(re * rhs.re - im*rhs.im, re*rhs.im + rhs.re*im);
}
