//
// Created by ASUS on 11.10.2021.
//

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {

    int pierwsza = stoi(argv[2]);
    int druga = stoi(argv[3]);

    if (argv[1]=="add"){
        cout<<pierwsza+druga<<endl;
        return 0;
    }
    if (argv[1]=="substract"){
        cout<<pierwsza-druga<<endl;
        return 0;
    }
    if (argv[1]=="volume"){
        cout<<pierwsza+druga<<endl;
        return 0;
    }
    if (argv[1]=="help"){

    }

/*
    int *n = new int;

    int k;
    cout<<"--------"<<endl;
    cout<< n<<endl<< *n<<endl<<&n<<endl<<&k<<endl;

    delete n;
    int tab[3] = {3,2,1};
    int *tabD = new int[5];
    delete[] tabD;

    int **tabDd = new int*[5];
    for (int i =0; i<5;i++){
        tabDd[i]= new int[5];
    }
    for (int i =0; i<5;i++){
        delete tabDd[i];
    }
    delete[] tabDd;
    */
    return 0;
}
