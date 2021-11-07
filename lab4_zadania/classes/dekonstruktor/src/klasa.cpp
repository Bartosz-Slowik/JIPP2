#include "../include/klasa.h"

mojaKlasa::mojaKlasa() {
    kb=new bool[1024];
    cout<<"Konstruktor wywolany!\n";
}

void mojaKlasa::pause() {
    system("PAUSE");
}

mojaKlasa::~mojaKlasa() {
    cout<<"\nDestruktor wywolany!";
    delete [] kb;
}
//zadania