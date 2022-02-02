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

bool Pole::isOdkryto() const {
    return odkryto;
}

void Pole::setOdkryto(bool odkryto) {
    Pole::odkryto = odkryto;
}
void Pole::setFlaga(bool flaga) {
    Pole::flaga = flaga;
}
bool Pole::isFlag() {
    return flaga;
}

Pole::~Pole(){
    //destruktor
}