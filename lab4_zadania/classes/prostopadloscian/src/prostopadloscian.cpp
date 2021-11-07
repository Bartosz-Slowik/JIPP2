//
// Created by ASUS on 25.10.2021.
//

#include "../include/prostopadloscian.h"

prostopadloscian::prostopadloscian(int dlugosc, int szerokosc, int wysokosc) {
    this->dlugosc = dlugosc;
    this->szerokosc = szerokosc;
    this->wysokosc = wysokosc;
}
int prostopadloscian::licz() {
    return 2*((dlugosc * szerokosc )+(dlugosc * wysokosc)+(szerokosc * wysokosc));
};
