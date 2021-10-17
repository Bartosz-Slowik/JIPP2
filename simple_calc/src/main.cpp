#include <iostream>
#include <string>
#include <calc.h>


using namespace std;

int main(int argc, char *argv[]) {
    setlocale( LC_ALL, "" );
    if (argc < 3){
        cout<<"Podaj parametry dla programu !"<<endl;
        help();
        return 0;
    }
    if (argc <5 && string(argv[1]) == "volume"){
        cout<<"Za malo argumentow do policzenia bryly"<<endl;
        help();
        return 0;
    }
    if (string(argv[1]) == "add"){
        cout<<"Wynik to: ";
        cout<<add(stoi(argv[2]), stoi(argv[3]));
    }
    else if (string(argv[1])=="substract"){
        cout<<"Wynik to: ";
        cout<<substract(stoi(argv[2]), stoi(argv[3]));
    }
    else if (string(argv[1])=="volume"){
        cout<<"Wynik to: ";
        cout<<volume(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]));
    }
    else if (string(argv[1])=="help") help();
    else {
        cout<<"Wprowadzono nieznany argument";
        help();
    }


    return 0;
}
