//
// Created by ASUS on 27.10.2021.
//

#include <iostream>


void help(){
    using namespace std;
    cout<< "Kalkulator macierzy - Aby dokonać obliczeń jako pierwszy argument programu użyj jednej z poniższych nazw:\n"
           "addMatrix - dodawanie dwóch macierzy\n"
           "subtractMatrix - odejmowanie dwóch macierzy\n"
           "multiplyMatrix - mnożenie dwóch macierzy\n"
           "multiplyByScalar - mnożenie przez skalar\n"
           "transpozeMatrix - transponowanie macierzy\n"
           "powerMatrix - potęgowanie macierzy\n"
           "determinantMatrix - wyznacznik macierzy \n"
           "matrixIsDiagonal - sprawdzanie czy macierz jest diagonalna\n"
           "sortRowsInMatrix - sortowanie wszystkich wierszy w macierzy Sortowanie jest rosnące\n"
           "help - Wyswietla pomoc ktora wlasnie czytasz\n";
}

int **createIntResultMatrix(int row, int col) {
    int **result;
    result = new int *[row];
    for (int i = 0; i < row; i++) {
        result[i] = new int[col];
    }
    return result;
}

double **createDoubleResultMatrix(int row, int col) {
    double **result;
    result = new double *[row];
    for (int i = 0; i < row; i++) {
        result[i] = new double[col];
    }
    return result;
}

int**  userGeneratedArray(int ** array, int row, int col) {
    using namespace std;
    cout<<endl<<"Podaj kolejno elementy tablicy oddzielajac je spacja/enterem: "<<endl;
    for (int k = 0; k < row; k++) {
        for (int m = 0; m < col; m++) {
            cin >> array[k][m];
            if (cin.fail()) {
                help();
                return 0;
            }
        }
    }
    return array;
}

double** userGeneratedArray(double **array, int row, int col) {
    using namespace std;
    cout<<endl<<"Podaj elementy tablicy oddzielajac je spacja/enterem: "<<endl;
    for (int k = 0; k < row; k++) {
        for (int m = 0; m < col; m++) {
            cin>>array[k][m];

        }
    }
    return array;
}

void printArray(int **array, int row, int col) {
    using namespace std;
    cout<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

void printArray(double **array, int row, int col) {
    using namespace std;
    cout<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}

int **addMatrix(int **arr, int **arr2, int row, int col) {
    int **result = createIntResultMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    return result;
}

double **addMatrix(double **arr, double **arr2, int row, int col) {
    double **result = createDoubleResultMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    return result;
}

int **subtractMatrix(int **arr, int **arr2, int row, int col) {
    int **result = createIntResultMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr[i][j] - arr2[i][j];
        }
    }
    return result;
}

double **subtractMatrix(double **arr, double **arr2, int row, int col) {
    double **result = createDoubleResultMatrix(row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = arr[i][j] - arr2[i][j];
        }
    }
    return result;
}

int **multiplyMatrix(int **arr, int **arr2, int row, int col, int m) {
    int **result = createIntResultMatrix(row, m);
    for (int a = 0; a < row; a++) {
        for (int b = 0; b < m; b++) {
            result[a][b] = 0;
            for (int c = 0; c < m; c++) {
                result[a][b] += arr[a][c] * arr2[c][b];
            }
        }
    }
    return result;
}

double **multiplyMatrix(double **arr, double **arr2, int row, int col, int m) {
    double **result = createDoubleResultMatrix(row, m);

    for (int a = 0; a < row; a++) {
        for (int b = 0; b < m; b++) {
            result[a][b] = 0;
            for (int c = 0; c < m; c++) {
                result[a][b] += arr[a][c] * arr2[c][b];
            }
        }
    }
    return result;
}

int **multiplyByScalar(int **arr, int row, int col, int scalar) {
    int **result = createIntResultMatrix(row, col);

    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            result[a][b] = arr[a][b] * scalar;
        }
    }
    return result;
}

double **multiplyByScalar(double **arr, int row, int col, double scalar) {
    double **result = createDoubleResultMatrix(row, col);

    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            result[a][b] = arr[a][b] * scalar;
        }
    }
    return result;
}

int **transpozeMatrix(int **arr, int row, int col) {
    int **result = createIntResultMatrix(row, col);

    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            result[a][b] = arr[b][a];
        }
    }
    return result;
}

double **transpozeMatrix(double **arr, int row, int col) {
    double **result = createDoubleResultMatrix(row, col);

    for (int a = 0; a < row; a++) {
        for (int b = 0; b < col; b++) {
            result[a][b] = arr[b][a];
        }
    }
    return result;
}

int **powerMatrix(int **arr, int row, int col, int power) {
    int **result = createIntResultMatrix(row, col);
    result = arr;
    for (int a = 1; a < power; a++) {
        result = multiplyMatrix(result, arr, row, col, col);
    }
    return result;
}

double **powerMatrix(double **arr, int row, int col, int power) {
    double **result = createDoubleResultMatrix(row, col);
    result = arr;
    for (int a = 1; a < power; a++) {
        result = multiplyMatrix(result, arr, row, col, col);
    }
    return result;
}

void clear(int **array, int i, int j) {
    for (int k = 0; k < i; k++) {
        delete[] array[k];
    }
    delete array;
}

void clear(double **array, int i, int j) {
    for (int k = 0; k < i; k++) {
        delete[] array[k];
    }
    delete array;
}

double recursiveDet(int n, int w, int *WK, double **A) {
    int i, j, k, m, *KK;
    double s;

    if (n == 1) return A[w][WK[0]]; // macierz 1 x 1, wyznacznik równy elementowi
    else {
        KK = new int[n - 1]; // tworzymy dynamiczny wektor kolumn
        s = 0; // zerujemy wartość rozwinięcia
        m = 1; // początkowy mnożnik
        for (i = 0; i < n; i++){
            k = 0; // tworzymy wektor kolumn dla rekurencji
            for (j = 0; j < n - 1; j++){
                if (k == i) k++; KK[j] = WK[k++];
            }
            s += m * A[w][WK[i]] * recursiveDet(n - 1, w + 1, KK, A);
            m = -m; // kolejny mnożnik
        }
        delete[] KK; // usuwamy zbędną już tablicę dynamiczną
        return s; // ustalamy wartość funkcji
    }
}

double determinantMatrix(double **arr, int n) {
    int *WK; // wektor kolumn
    WK = new int[n]; // tworzymy wiersz kolumn
    for (int i = 0; i < n; i++) WK[i] = i;
    double x = recursiveDet(n, 0, WK, arr); // obliczamy i wyświetlamy wyznacznik
    delete[] WK; // usuwamy tablice dynamiczne
    for (int i = 0; i < n; i++) delete[] arr[i];
    delete[] arr;
    return x;
}

int recursiveDet(int n, int w, int *WK, int **A) {
    int i, j, k, m, *KK;
    double s;

    if (n == 1) return A[w][WK[0]]; // macierz 1 x 1, wyznacznik równy elementowi
    else {
        KK = new int[n - 1]; // tworzymy dynamiczny wektor kolumn
        s = 0; // zerujemy wartość rozwinięcia
        m = 1; // początkowy mnożnik
        for (i = 0; i < n; i++){
            k = 0; // tworzymy wektor kolumn dla rekurencji
            for (j = 0; j < n - 1; j++){
                if (k == i) k++; KK[j] = WK[k++];
            }
            s += m * A[w][WK[i]] * recursiveDet(n - 1, w + 1, KK, A);
            m = -m; // kolejny mnożnik
        }
        delete[] KK; // usuwamy zbędną już tablicę dynamiczną
        return s; // ustalamy wartość funkcji
    }
}

int determinantMatrix(int **arr, int n) {
    int *WK; // wektor kolumn
    WK = new int[n]; // tworzymy wiersz kolumn
    for (int i = 0; i < n; i++) WK[i] = i;
    int x = recursiveDet(n, 0, WK, arr); // obliczamy i wyświetlamy wyznacznik
    delete[] WK; // usuwamy tablice dynamiczne
    for (int i = 0; i < n; i++) delete[] arr[i];
    delete[] arr;
    return x;
}
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(double &a, double &b){
    double temp = a;
    a = b;
    b = temp;
}

int *sortRow(int *arr, int col) {
    int* result = arr;
    for (int i = 0; i < col-1; i++) {
        for (int j = 0; j < col - i - 1; j++)
            if (result[j] > result[j + 1])
                swap(result[j], result[j + 1]);
    }
    return result;
}
double *sortRow(double *arr, int col) {
    double* result = arr;
    for (int i = 0; i < col-1; i++) {
        for (int j = 0; j < col - i - 1; j++)
            if (result[j] > result[j + 1])
                swap(result[j], result[j + 1]);
    }
    return result;
}

int **sortRowsInMatrix(int **arr, int row, int col) {
    int ** result = arr;
    for (int i = 0; i < row; i++)
        result[i]=sortRow(arr[i],col);
    return result;
}

double **sortRowsInMatrix(double **arr, int row, int col) {
    double ** result = arr;
    for (int i = 0; i < row; i++)
        result[i]=sortRow(arr[i],col);
    return result;
}
bool matrixIsDiagonal(int **arr, int row, int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j]!=0 && i!=j) return 0;
        }
    }
    return 1;
}
bool matrixIsDiagonal(double **arr, int row, int col){
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j]!=0 && i!=j) return 0;
        }
    }
    return 1;
}


