#include <iostream>
#include <string>

using namespace std;

int add(int x, int y){
    return x+y;
}

int substract(int x, int y){
    return x-y;
}
int volume(int x, int y, int h, int H){
    return (x+y)*h*H;
}
void  help(){
    setlocale( LC_ALL, "" );
    cout<<"Simple calculator\n"
          "Program kalkuluje na podstawie argumentow podanych przy kompilacji\n"
          "\n"
          "Dzialania:\n"
          "add [a] [b]\n"
          "    Dodawanie dwoch liczb  calkowitych. ([a] + [b])   \n"
          "substract [a] [b]\n"
          "    Odejmowanie dwoch liczb  calkowitych. ([a] - [b])   \n"
          "volume [a] [b] [h] [H]\n"
          "    obliczanie objetosci graniastoslupa prostego o podstawie trapezu z\n"
          "    czterech  liczb  calkowitych. (([a] + [b])* [h] *[H] )   \n"
          "help\n"
          "    wyswietla dokumentacje ktora wlasnie czytasz\n"
          ;

}