#include <iostream>
#include "Note.h"
using namespace std;


int main(){
        Note *notatka2 = new TextNote("hej","hej");
        string content[]={"Witaj","World","Kocham","JIPP"};
        string content2 = R"Hello
asdasdsasd Hello"
        Note *notatka = new ListNote("hej",content);
        cout << "Content: " << notatka->getContent() << endl;

        notatka2->setContent("Zmienilem content");
        cout << notatka2->getTitle()<<" Content: " << notatka2->getContent() << endl;

    return 0;
}