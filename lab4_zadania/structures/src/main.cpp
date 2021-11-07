//
// Created by ASUS on 25.10.2021.
//

#include <iostream>
#include <iomanip>

#include <string.h>
using namespace std;
struct samochod{
    string marka;
    string model;
    int  rokP;
    string kolor;
};
int main(){
    samochod car[5]= {
            {"Ford",   "Mondeo", 2001, "srebrny"},
            {"Audi",   "An",     2007, "czarny"},
            {"Fiat",   "126p",   1985, "czerwony"},
            {"Porche", "911",    2021, "bialy"},
            {"tesla","cybertruck",2022,"aluminium"}
    };
    int n=sizeof(car) / sizeof(samochod);
    cout<<setw (10);
    cout<<"Marka | ";
    for(int j=0; j<n; j++){
        cout <<setw (10)<< car[j].marka<<" | ";
    }
    cout<<endl<<setw (10)<<"Kolor | ";
    for(int j=0; j<n; j++){
        cout <<setw (10)<< car[j].kolor<<" | ";
    }
    cout<<endl<<setw (10)<<"Model | ";
    for(int j=0; j<n; j++){
        cout <<setw (10)<< car[j].model<<" | ";
    }
    cout<<endl<<setw (10)<<"Rok P | ";
    for(int j=0; j<n; j++){
        cout <<setw (10)<< car[j].rokP<<" | ";
    }


    return 0;
}