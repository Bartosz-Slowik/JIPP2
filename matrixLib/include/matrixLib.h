//
// Created by ASUS on 27.10.2021.
//

#include <iostream>

/**
 * Display help text
 */
void help();
/**
 * Function creates an empty Integer matrix
 * @param row #of rows
 * @param col #of colummns
 * @return pointer to row x col Integer Matrix
 */
int **createIntResultMatrix(int row, int col);
/**
 * Function creates an empty Double matrix
 * @param row #of rows
 * @param col #of columns
 * @return pointer to row x col Double Matrix
 */
double **createDoubleResultMatrix(int row, int col);
/**
 * Uses cin to fill an array by user.
 * @param array empty array
 * @param col #of rows
 * @param row #of columns
 */
int** userGeneratedArray(int** array, int row, int col);
/**
 * Uses cin to fill an array by user.
 * @param array empty array
 * @param col #of rows
 * @param row #of columns
 */
double** userGeneratedArray(double** array, int row, int col);
/**
 * Prints an array on the standard output
 * @param array array to print
 * @param row #of rows
 * @param col #of columns
 */
void printArray(int **array, int row, int col);
/**
 * Prints an array on the standard output
 * @param array array to print
 * @param row #of rows
 * @param col #of columns
 */
void printArray(double **array, int row, int col);
/**
 * Adds 2 same sized matrixes together
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
int **addMatrix(int **arr, int **arr2, int row, int col);
/**
 * Adds 2 same sized matrixes together
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
double **addMatrix(double **arr, double **arr2, int row, int col);
/**
 * Substracts 2 same sized matrixes, (substracts second matrix from first)
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
int **subtractMatrix(int **arr, int **arr2, int row, int col);
/**
 * Substracts 2 same sized matrixes, (substracts second matrix from first)
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
double **subtractMatrix(double **arr, double **arr2, int row, int col);
/**
 * Multiples 2 same sized matrixes,
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
int **multiplyMatrix(int **arr, int **arr2, int row, int col, int m);
/**
 * Multiples 2 same sized matrixes,
 * @param arr first matrix
 * @param arr2 second matrix
 * @param row #of rows
 * @param col #of columns
 * @return  new array with result
 */
double **multiplyMatrix(double **arr, double **arr2, int row, int col, int m);
/**
 * Multiplies a Matrix by scalar number
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @param scalar scalar number
 * @return new array with result
 */
int **multiplyByScalar(int **arr, int row, int col, int scalar);
/**
 * Multiplies a Matrix by scalar number
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @param scalar scalar number
 * @return new array with result
 */
double **multiplyByScalar(double **arr, int row, int col, double scalar);
/**
 * Transposes a matrix
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return new array with result
 */
int **transpozeMatrix(int **arr, int row, int col);
/**
 * Transposes a matrix
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return new array with result
 */
double **transpozeMatrix(double **arr, int row, int col);
/**
 * Takes a matrix to the power of  power
 * @param power integer of power
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return new array with result
 */
int **powerMatrix(int **arr, int row, int col,  int power);
/**
 * Takes a matrix to the power of power
 * @param power integer of power
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return new array with result
 */
double **powerMatrix(double **arr, int row, int col,  int power);
/**
 * deletes a matrix
 * @param array our matrix
 * @param i #of rows
 * @param j #of cols
 */
void clear(int **array, int i, int j);
/**
 * deletes a matrix
 * @param array our matrix
 * @param i #of rows
 * @param j #of cols
 */
void clear(double **array, int i, int j);
/**
 * recursive helper function for determinantMatrix function
 * @return new result array
 */
int recursiveDet(int n, int w, int *WK, int **A);
/**
 * Calculates a determinant of a given matrix
 * @param arr our array
 * @param n #of columns
 * @return return a determinant number
 */
int  determinantMatrix(int** arr, int n);
/**
 * recursive helper function for determinantMatrix function
 * @return new result array
 */
double recursiveDet(int n, int w, int *WK, double **A);
/**
 * Calculates a determinant of a given matrix
 * @param arr our array
 * @param n #of columns
 * @return return a determinant number
 */
double determinantMatrix(double** arr, int n);
/**
 * swaps two numbers
 * @param a first number
 * @param b second number
 */
void swap(int &a, int &b);
/**
 * swaps two numbers
 * @param a first number
 * @param b second number
 */

void swap(double &a, double &b);
/**
 * Sorts 1 dimensional array
 * @param arr array
 * @param col #of collumns / #of elements in arary
 * @return new sorted array
 */
int* sortRow(int* arr, int col);
/**
 * Sorts 1 dimensional array
 * @param arr array
 * @param col #of collumns / #of elements in arary
 * @return new sorted array
 */
double* sortRow(double* arr, int col);
/**
 * Sorts every row in a matrix using function sortRow
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return returns new matrix with sorted rows
 */
int** sortRowsInMatrix(int** arr, int row, int col);
/**
 * Sorts every row in a matrix using function sortRow
 * @param arr our matrix
 * @param row #of rows
 * @param col #of columns
 * @return returns new matrix with sorted rows
 */
double** sortRowsInMatrix(double** arr, int row, int col);
/**
 * Calculates whether the matrix is diagonal or not
 * @param arr our array
 * @param row #of rows
 * @param col #of columns
 * @return true or false
 */
bool matrixIsDiagonal(int **arr, int row, int col);
/**
 * Calculates whether the matrix is diagonal or not
 * @param arr our array
 * @param row #of rows
 * @param col #of columns
 * @return true or false
 */
bool matrixIsDiagonal(double **arr, int row, int col);