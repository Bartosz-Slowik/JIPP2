//
// Created by ASUS on 23.01.2022.
//

#include "Plansza.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "Pole.h"
using namespace std;



Plansza::Plansza(int iloscWierszy, int iloscKolumn, int iloscBomb) : iloscWierszy(iloscWierszy),
                                                                     iloscKolumn(iloscKolumn), iloscBomb(iloscBomb) {
    iloscRuchow=0;
    koniecGry=false;
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
int Plansza::istnieje(int w, int k){
    try {pola.at(w);
        pola[w].at(k);
        if(pola[w][k].isMina()) return 1;
        else return 0;
    }
    catch(...){
        return 0;
    }
}
void Plansza::inicjalizacja(int w, int k) {
    srand(time(NULL));
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
            temp+=istnieje(i-1,j-1);
            temp+=istnieje(i-1,j);
            temp+=istnieje(i-1,j+1);
            temp+=istnieje(i,j-1);
            temp+=istnieje(i,j+1);
            temp+=istnieje(i+1,j-1);
            temp+=istnieje(i+1,j);
            temp+=istnieje(i+1,j+1);
            pola[i][j].setLiczba(temp);
        }
    }
}

void Plansza::ruch(int w, int k) {
    if(iloscRuchow==0) inicjalizacja(w,k);
    iloscRuchow++;
    if(pola[w][k].isMina()){
        koniecGry=true;
        cout<<"PRZEGRANA";
    }


}
void Plansza::printPola() {
    for (int i = 0; i < iloscWierszy; i++){
        for (int j = 0; j < iloscKolumn; j++) {
            cout<<"|";
            if (pola[i][j].isMina())cout << "M|";
            else cout << pola[i][j].getLiczba() << "|";
        }
        //cout<<endl;
        //for (int j = 0; j < iloscKolumn; j++) cout<<"-- ";
        cout<<endl;
    }
}


