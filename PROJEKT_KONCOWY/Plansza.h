//
// Created by ASUS on 23.01.2022.
//

#ifndef JIPP2_PLANSZA_H
#define JIPP2_PLANSZA_H
#include <vector>
#include "Pole.h"

using namespace std;

class Plansza {
public:
    Plansza(int iloscWierszy, int iloscKolumn, int iloscBomb);
    vector<vector<Pole>> pola;
    void printPola();
    void ruch(int w, int k);


    bool koniecGry;

protected:
    int iloscWierszy;
    int iloscKolumn;
    int iloscBomb;
    int iloscRuchow;
private:
    void inicjalizacja(int w, int k);
    int istnieje(int w, int k);





};
#endif //JIPP2_PLANSZA_H
