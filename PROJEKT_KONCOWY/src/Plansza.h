
#ifndef JIPP2_PLANSZA_H
#define JIPP2_PLANSZA_H
#include <vector>
#include <chrono>
#include "Pole.h"
#include "Top10.h"
#include <string>

using namespace std;

class Plansza {
public:

    int iloscWierszy;
    int iloscKolumn;
    int iloscRuchow;
    int iloscBomb;
    int iloscFlag;
    int wynik;
    bool wygrana;
    bool koniecGry;
    bool start;
    bool pokaztop;
    Top10 BazaD;
    chrono::high_resolution_clock::time_point czasStart;
    vector<vector<Pole>> pola;

    Plansza(int iloscWierszy, int iloscKolumn, int iloscBomb);
    Plansza();

    void reset();
    void printPola();
    void ruch(int w, int k);
    void flaguj(int w, int k);
    int liczDoOkrycia();
    bool sprawdzRekord(int wynik2);
    ~Plansza();
    bool czyWygrana();
    
private:
    
    void inicjalizacja(int w, int k);
    int istniejeMina(int w, int k);
    void istniejeZero(int w, int k);
    void odkryjPustychSasiadow(int w, int k);



};
#endif //JIPP2_PLANSZA_H
