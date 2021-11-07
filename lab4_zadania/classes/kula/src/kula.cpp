//
// Created by ASUS on 25.10.2021.
//
#include <iostream>
#include "kula.h"
using namespace std;



void Kula::wpiszDane() {
    cout<<"Podaj promien: ";
    cin>>r;
}
double Kula::objetosc(){
    double v;
    v=3.1415*r*r*r;
    return v;
}
