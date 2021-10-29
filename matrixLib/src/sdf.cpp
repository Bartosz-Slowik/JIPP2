//
// Created by ASUS on 27.10.2021.
//

#ifndef JIPP2_MATRIXLIB_H
#define JIPP2_MATRIXLIB_H


/**
 *
 * @param array
 * @param rows
 * @param col
 */
void printArray(double **array, int rows, int col);
/**
 *
 * @param array
 * @param rows
 * @param col
 */
void printArray(int **array, int rows, int col);
/**
 *
 * @return
 */
int **createIntResultMatrix(int, int);

double **createDoubleResultMatrix(int, int);
/**
 *
 * @param array
 * @param m
 * @param n
 */
void clear(int **array, int m, int n);

void clear(double **array, int m, int n);

int **addMatrix(int **, int **, int, int);

double **addMatrix(double **, double **, int, int);

int **subtractMatrix(int **, int **, int, int);

double **subtractMatrix(double **, double **, int, int);

int **multiplyMatrix(int **, int **, int, int, int);

double **multiplyMatrix(double **, double **, int, int, int);

int **multiplyByScalar(int **, int, int, int);

double **multiplyByScalar(double **, int, int, double);

int **transpozeMatrix(int **, int, int);

double **transpozeMatrix(double **, int, int);

int **powerMatrix(int **, int, int, unsigned int);

double **powerMatrix(double **, int, int, unsigned int);

int determinantMatrix();

bool matrixIsDiagonal();

void swap(int, int);

void swap(double, double);

int *sortRow(int *, int);

//double sortRow(double*, int);

int **sortRowsInMatrix(int **, int, int);

int detMatrix(int **, int);

double detMatrix(double **, int);

void userGeneratedArray(int** &array, int col, int row);

[[maybe_unused]] void userGeneratedArray(double** &array, int col, int row);

#endif //JIPP2_MATRIXLIB_H
