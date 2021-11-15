//
// Created by ASUS on 08.11.2021.
//

#include "../include/Samochody.h"

using namespace std;



Samochody::Samochody(const string &nrRej, const string &nazwa, int iloscM, const string &markaTyp)
        : nrRej(nrRej),
        nazwa(nazwa),
        iloscM(iloscM),
        markaTyp(markaTyp),
        lista(){
    lista = new string[iloscM];
    for(int i = 0; i < iloscM; i++)
    {
        lista[i] = "puste";
    }

}

void Samochody::showStuff() {
    cout<<nrRej<<endl;
    cout<<nazwa<<endl;
    cout<<iloscM<<endl;
    cout<<markaTyp<<endl;
    for(int i = 0; i < iloscM; i++){
        cout<<lista[i]<<" - ";
    }

};
void Samochody::zmienPasazera(int nrM, string info){
    lista[nrM] = info;
}

Samochody::Samochody(Samochody &Samochody) {
            nrRej= Samochody.nrRej;
            nazwa= Samochody.nazwa;
            iloscM= Samochody.iloscM;
            markaTyp= Samochody.markaTyp;
        lista = new string[iloscM];
        for(int i = 0; i < iloscM; i++)
        {
            lista[i] = "puste";
        }

}
