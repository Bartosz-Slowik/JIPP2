
#include "ofMain.h"
#include "ofApp.h"
#include <string>


#define SKALA 32
//using namespace std;

int main(int argc, char* argv[]) {
    
    
    int wiersze, kolumny, miny;
    
    
    if (argc != 1 && argc != 4) {
        cout << "Zla ilosc parametrow wywolania.";
        return 0;
    }
    if (argc == 1) {
        wiersze = 9;
        kolumny = 9;
        miny = 10;
    }
    else {
        wiersze = atoi(argv[1]);
        kolumny = atoi(argv[2]);
        miny = atoi(argv[3]);
    }
    if (wiersze < 9 || kolumny < 9) {
        cout << "Minimalny rozmiar planszy to 9x9";
        return 0;
    }
    if (wiersze > 32 || kolumny > 64) {
        cout << "Maksymalny rozmiar planszy to 64x32";
        return 0;
    }
    if (miny<10 || miny>(wiersze * kolumny - 2)) {
        cout << "Zła liczba min.";
        return 0;
    }
    
    ofGLFWWindowSettings settings;
    settings.resizable = false;
    settings.setSize(wiersze * SKALA, kolumny * SKALA + 70);
    ofCreateWindow(settings);
    
    ofApp *apka = new ofApp();
    apka->p1 = Plansza(wiersze, kolumny, miny);;
    apka->liczbaWierszy = wiersze;
    apka->liczbaKolumn = kolumny;
    apka->liczbaMin = miny;

    ofRunApp(apka);
    

   
}
