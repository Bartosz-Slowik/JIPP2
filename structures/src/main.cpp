//
// Created by ASUS on 25.10.2021.
//

#include <iostream>

#include <string.h>
using namespace std;
struct samochod{
    string marka;
    string model;
    int  rokP;
    string kolor;
};
int main(){
    samochod car[4];
    car[0] = {"Ford", "Mondeo", 2001,"srebrny"};
    car[1] = {"Audi", "A4", 2007,"czarny"};
    car[2] = {"Fiat", "126p", 1985,"czerwony"};
    car[3] = {"Porche", "911", 2021,"bialy"};
    cout<<"Marka | ";
    for(int j=0; j<4; j++){
        cout << car[j].marka<<" | ";
    }
    cout<<endl<<"Kolor | ";
    for(int j=0; j<4; j++){
        cout << car[j].kolor<<" | ";
    }
    cout<<endl<<"Model | ";
    for(int j=0; j<4; j++){
        cout << car[j].model<<" | ";
    }
    cout<<endl<<"Rok P | ";
    for(int j=0; j<4; j++){
        cout << car[j].rokP<<" | ";
    }
//zadanie

    return 0;
}