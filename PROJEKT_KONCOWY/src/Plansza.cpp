//
// Created by ASUS on 23.01.2022.
//

#include "Plansza.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include <chrono>

using namespace std;


Plansza::Plansza() {};
Plansza::Plansza(int iloscWierszy, int iloscKolumn, int iloscBomb) : iloscWierszy(iloscWierszy),
                                                                     iloscKolumn(iloscKolumn), iloscBomb(iloscBomb) {
    iloscRuchow=0;
    pokaztop = false;
    koniecGry=false;
    wygrana = false;
    start = false;
    iloscFlag = 0;
    for (int i = 0; i < iloscWierszy; i++)
    {
        // construct a vector of ints with the given default value
        std::vector<Pole> v;
        for (int j = 0; j < iloscKolumn; j++) {
            v.push_back(Pole());
        }
        // push back above one-dimensional vector
        pola.push_back(v);
    }
}
void Plansza::reset() {
    iloscRuchow = 0;
    koniecGry = false;
    wygrana = false;
    start = false;
    pokaztop = false;
    iloscFlag = 0;
    for (int i = 0; i < iloscWierszy; i++)
    {
        for (int j = 0; j < iloscKolumn; j++) {
            pola[i][j].setLiczba(0);
            pola[i][j].setFlaga(false);
            pola[i][j].setMina(false);
            pola[i][j].setOdkryto(false);
        }
     
        
    }
}



int Plansza::istniejeMina(int w, int k){
    try {pola.at(w);
        pola[w].at(k);
        if(pola[w][k].isMina()) return 1;
        else return 0;
    }
    catch(out_of_range){
        return 0;
    }
}
void Plansza::istniejeZero(int w, int k){
    try {pola.at(w);
        pola[w].at(k);
        if (!pola[w][k].isOdkryto()){
            pola[w][k].setOdkryto(true);
            if(pola[w][k].getLiczba()==0) {
                odkryjPustychSasiadow(w, k);
            }
        }

    }
    catch(out_of_range){
    }
}
void Plansza::inicjalizacja(int w, int k) {

    srand(time(NULL));
    start = true;
    czasStart = chrono::high_resolution_clock::now();
    for(int i=0;i<iloscBomb;i=i){
        int temp[2]={rand()%iloscWierszy,rand()%iloscKolumn};
        if(!(temp[0]==w && temp[1] == k))
            if(!pola[temp[0]][temp[1]].isMina()){
                pola[temp[0]][temp[1]].setMina(true);
                i++;
            }
    }
    for(int i=0;i<iloscWierszy;i++){
        for(int j=0;j<iloscKolumn;j++){
            int temp=0;
            temp+=istniejeMina(i-1,j-1);
            temp+=istniejeMina(i-1,j);
            temp+=istniejeMina(i-1,j+1);
            temp+=istniejeMina(i,j-1);
            temp+=istniejeMina(i,j+1);
            temp+=istniejeMina(i+1,j-1);
            temp+=istniejeMina(i+1,j);
            temp+=istniejeMina(i+1,j+1);
            pola[i][j].setLiczba(temp);
        }
    }
}
void Plansza::odkryjPustychSasiadow(int w, int k){
    istniejeZero(w-1,k-1);
    istniejeZero(w-1,k);
    istniejeZero(w-1,k+1);
    istniejeZero(w,k-1);
    istniejeZero(w,k+1);
    istniejeZero(w+1,k-1);
    istniejeZero(w+1,k);
    istniejeZero(w+1,k+1);
}


void Plansza::ruch(int w, int k) {
    if(iloscRuchow==0) inicjalizacja(w,k);
    if (pola[w][k].isFlag()) flaguj(w,k);
    iloscRuchow++;
    pola[w][k].setOdkryto(true);
   
    if(pola[w][k].getLiczba()==0)odkryjPustychSasiadow(w,k);
    printPola();
    if(pola[w][k].isMina()){
        koniecGry=true;
        cout<<"\n**********\nPRZEGRANA\n***********\n";
    }
    else czyWygrana();
    



}
void Plansza::flaguj(int w, int k)
{
    if (!pola[w][k].isOdkryto()) {
        if (pola[w][k].isFlag()) {
            pola[w][k].setFlaga(false);
            iloscFlag -= 1;
        }
        else {
            pola[w][k].setFlaga(true);
            iloscFlag++;
        }
    }
    else {
        pola[w][k].setFlaga(false);
    }
}
int Plansza::liczDoOkrycia() {
    int wynik=0;
    for (int i = 0; i < iloscWierszy; i++){
        for (int j = 0; j < iloscKolumn; j++) {
            if(pola[i][j].isOdkryto())wynik++;
        }
    }
    return (iloscWierszy*iloscKolumn)-wynik;
}
void Plansza::printPola() {
    cout << "\n--------------------------------\n";
    for (int j = 0; j < iloscWierszy; j++){
        for (int i = 0; i < iloscKolumn; i++) {
            cout<<"|";
            if(pola[i][j].isOdkryto()) {
                if (pola[i][j].isMina())cout << "M|";
                else cout << pola[i][j].getLiczba() << "|";
            }
            else cout<<"X|";
        }
        cout << endl; 
    }
    cout << "\n--------------------------------\n";
}
bool Plansza::czyWygrana() {
    if (liczDoOkrycia() == iloscBomb) {
        cout << "WYGRANA\n";
        koniecGry = true;
        wygrana = true;
        return true;
    }
    return false;
}
bool Plansza::sprawdzRekord(int wynik2) {
    if (wygrana && wynik/100000 < wynik2) {
        return true;
    }
    return false;
}
Plansza::~Plansza() {
//destruktor
}

