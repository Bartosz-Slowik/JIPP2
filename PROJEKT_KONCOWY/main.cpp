#include <iostream>
#include "Pole.h"
#include "Plansza.h"
#define ROWS 9
#define COLS 9
#define BOMBS 20

using namespace std;

int main() {
    Plansza p1=Plansza(5,5,10);
    p1.printPola();
    while (!p1.koniecGry){
        int ruch[2];
        cin>>ruch[0]>>ruch[1];
        p1.ruch(ruch[0],ruch[1]);
        //p1.ruch(2,2);
        p1.printPola();
    }



    return 0;
}
