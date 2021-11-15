//
// Created by ASUS on 08.11.2021.
//


#include <iostream>
#include "../include/Samochody.h"

using namespace std;


int main() {
    Samochody mojSamochod("nrRej","nazwa",12,"Audi");
    mojSamochod.showStuff();
    cout<<endl<<"---------------------------"<<endl;
    mojSamochod.zmienPasazera(0,"wiesiek");
    mojSamochod.showStuff();

    return 0;
}

