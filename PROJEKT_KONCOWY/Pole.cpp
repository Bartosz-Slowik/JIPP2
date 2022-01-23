//
// Created by ASUS on 23.01.2022.
//

#include "Pole.h"

Pole::Pole() {
    liczba=0;
    flaga=false;
    mina=false;
    odkryto=false;

}

int Pole::getLiczba() const {
    return liczba;
}

void Pole::setLiczba(int l) {
    Pole::liczba = l;
}

void Pole::setMina(bool mina) {
    Pole::mina = mina;
}

bool Pole::isMina() const {
    return mina;
}

