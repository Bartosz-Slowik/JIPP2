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
    if (argc!=2){ //wyswietlenie help jesli liczba argumentow nie bedzie dobra
        help();
        return 0;
    }
    //wywalanie funkcji jesli INT
    if (isInt){
        int ** array, ** array2, ** result;
        cout<<"Jakiej wielkosci bedzie macierz? (ilosc_wierszy (spacja) ilosc_kolumn)";
        cin>>row>>col;



        if (strcmp(argv[1], "addMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            array2 = createIntResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col);
            printArray(array2,row,col);
            result = addMatrix(array,array2,row,col);
            printArray(result,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);
        }

        else if (strcmp(argv[1] , "subtractMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            array2 = createIntResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col);
            printArray(array2,row,col);
            result = subtractMatrix(array,array2,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);

        }

        else if (strcmp(argv[1],"multiplyMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            cout<<endl<<"Ilosc kolumn drugiej macierzy: ";
            cin>>col2;
            array2 = createIntResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col2);
            printArray(array2,row,col2);
            result = multiplyMatrix(array,array2,row,col,col2);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);

        }

        else if (strcmp(argv[1],"multiplyByScalar")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            int skalar;
            cout<<endl<<"Podaj skalar: ";
            cin>>skalar;
            result = multiplyByScalar(array,row,col,skalar);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"transpozeMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            result = transpozeMatrix(array,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"powerMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            int power=1;
            cout<<endl<<"Podaj potege: ";
            cin>>power;
            result = powerMatrix(array,row,col,power);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"sortRowsInMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            result = sortRowsInMatrix(array,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }
        else if (strcmp(argv[1],"matrixIsDiagonal")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            if( matrixIsDiagonal(array,row,col)) cout<<endl<<"Matrix is diagonal"<<endl;
            else cout<<endl<<"Matrix is NOT diagonal"<<endl;

        }
        else if (strcmp(argv[1],"determinantMatrix")==0){
            array = createIntResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            cout<<endl<<"Determinant = "<<determinantMatrix(array, col)<<endl;

        }
        else {
            help();
            return 0;
        }


        clear(array, row, col);
        clear(result, row, col);
    }
        //wywalanie funkcji jesli DOUBLE
    else{
        double ** array, ** array2, ** result;
        cout<<"Jakiej wielkosci bedzie macierz? (ilosc_wierszy (spacja) ilosc_kolumn)";
        cin>>row>>col;



        if (strcmp(argv[1], "addMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            array2 = createDoubleResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col);
            printArray(array2,row,col);
            result = addMatrix(array,array2,row,col);
            printArray(result,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);
        }

        else if (strcmp(argv[1] , "subtractMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            array2 = createDoubleResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col);
            printArray(array2,row,col);
            result = subtractMatrix(array,array2,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);

        }

        else if (strcmp(argv[1],"multiplyMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            cout<<endl<<"Ilosc kolumn drugiej macierzy: ";
            cin>>col2;
            array2 = createDoubleResultMatrix(row,col);
            array2 = userGeneratedArray(array2, row, col2);
            printArray(array2,row,col2);
            result = multiplyMatrix(array,array2,row,col,col2);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);
            clear(array2, row, col);

        }

        else if (strcmp(argv[1],"multiplyByScalar")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            int skalar;
            cout<<endl<<"Podaj skalar: ";
            cin>>skalar;
            result = multiplyByScalar(array,row,col,skalar);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"transpozeMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            result = transpozeMatrix(array,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"powerMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            int power=1;
            cout<<endl<<"Podaj potege: ";
            cin>>power;
            result = powerMatrix(array,row,col,power);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }

        else if (strcmp(argv[1],"sortRowsInMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            result = sortRowsInMatrix(array,row,col);
            cout<<endl<<"Wynik "<<argv[1]<<" : ";
            printArray(result,row,col);

        }
        else if (strcmp(argv[1],"matrixIsDiagonal")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            if( matrixIsDiagonal(array,row,col)) cout<<endl<<"Matrix is diagonal"<<endl;
            else cout<<endl<<"Matrix is NOT diagonal"<<endl;

        }
        else if (strcmp(argv[1],"determinantMatrix")==0){
            array = createDoubleResultMatrix(row,col);
            array = userGeneratedArray(array, row, col);
            cout<<endl<<"Podano: ";
            printArray(array,row,col);
            cout<<endl<<"Determinant = "<<determinantMatrix(array, col)<<endl;

        }
        else {
            help();
            return 0;
        }


        clear(array, row, col);
        clear(result, row, col);
    }














    return 0;
}



