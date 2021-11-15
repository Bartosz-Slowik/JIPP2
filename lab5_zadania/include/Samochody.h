//
// Created by ASUS on 08.11.2021.
//

#ifndef JIPP2_SAMOCHODY_H
#define JIPP2_SAMOCHODY_H

#include <iostream>
#include <string>
using namespace std;

class Samochody {
private:
    string nrRej;
    string nazwa;
    int iloscM;
    string markaTyp;
    string* lista;

public:
    Samochody(const string &nrRej, const string &nazwa, int iloscM, const string &marka);
    Samochody(Samochody &Samochodyy);
    void showStuff();
    void zmienPasazera(int nrM, string info);
};



#endif //JIPP2_SAMOCHODY_H
