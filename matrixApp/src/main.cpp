//
// Created by ASUS on 27.10.2021.
//
#include <iostream>
#include <matrixLib.h>

using namespace std;

int main(int argc, char * argv[]) {
    int row, col, col2;
    bool isInt=0;
    cout<<"Czy tablica bedzie typu int (wpisz 1) czy typu double(wpisz 0) ?"<<endl;
    cin>>isInt;
    if (isInt){
        int ** array, ** array2, ** result;
        cout<<"Jakiej wielkosci bedzie macierz? (ilosc_wierszy (spacja) ilosc_kolumn)";
        cin>>row>>col;
        array = createIntResultMatrix(row,col);
        userGeneratedArray(array, row, col);

        cout<<endl<<"Podano: ";
        printArray(array,row,col);


        if (argv[1]=="addMatrix"){
            cout<<endl<<"Ilosc kolumn drugiej macierzy: ";
            cin>>col2;
            array2 = createIntResultMatrix(row,col);
            userGeneratedArray(array2, row, col2);
            printArray(array2,row,col2);
            result = addMatrix(array,array2,row,col);
        }

        else if (argv[1]=="subtractMatrix"){
            cout<<endl<<"Ilosc kolumn drugiej macierzy: ";
            cin>>col2;
            array2 = createIntResultMatrix(row,col);
            userGeneratedArray(array2, row, col2);
            printArray(array2,row,col2);
            result = subtractMatrix(array,array2,row,col);

        }

        else if (argv[1]=="multiplyMatrix"){
            cout<<endl<<"Ilosc kolumn drugiej macierzy: ";
            cin>>col2;
            array2 = createIntResultMatrix(row,col);
            userGeneratedArray(array2, row, col2);
            printArray(array2,row,col2);
            result = multiplyMatrix(array,array2,row,col,col2);

        }

        else if (argv[1]=="multiplyByScalar"){
            int skalar;
            cout<<endl<<"Podaj skalar: ";
            cin>>skalar;
            result = multiplyByScalar(array,row,col,skalar);

        }

        else if (argv[1]=="transpozeMatrix"){
            result = transpozeMatrix(array,row,col);

        }

        else if (argv[1]=="powerMatrix"){
            int power=1;
            cout<<endl<<"Podaj potege: ";
            cin>>power;
            result = powerMatrix(array,row,col,power);

        }

        else if (argv[1]=="sortRowsInMatrix"){
            result = sortRowsInMatrix(array,row,col);

        }
        cout<<endl<<"Wynik "<<argv[1]<<" : ";

        printArray(array2,row,col);
        clear(array, row, col);
        clear(array2, row, col);
        clear(result, row, col);
    }













    return 0;
}



