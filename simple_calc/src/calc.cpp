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
          "add [first] [second]\n"
          "    Dodawanie dwoch liczb  calkowitych. ([first] + [second])   \n"
          "substract [first] [second]\n"
          "    Odejmowanie dwoch liczb  calkowitych. ([first] - [second])   \n"
          "volume [first] [second] [h] [H]\n"
          "    obliczanie objetosci graniastoslupa prostego o podstawie trapezu z\n"
          "    czterech  liczb  calkowitych. (([first] + [second])* [h] *[H] )   \n"
          "help\n"
          "    wyswietla dokumentacje ktora wlasnie czytasz\n"
          ;

}