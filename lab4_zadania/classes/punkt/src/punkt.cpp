#include "punkt.h"

Punkt::Punkt() {
    cout<<"Wpisz wspolrzedne pierwszego pkt: x = ";
    cin >> first.x;
    cout<<"y = ";
    cin >> first.y;

    cout<<endl<<"Wpisz wspolrzedne drugiego pkt: x = ";
    cin >> second.x;
    cout<<"y = ";
    cin >> second.y;
}

double Punkt::odleglosc() {
    double odleglosc;
    odleglosc= sqrt((first.x - second.x)*(first.x - second.x) + (first.y - second.y)*(first.y - second.y) );
    return odleglosc;
}
