// Kenji Fushida
// Created on Sat. June 11, 2022
// Matrix Multiplication, no command-line arguments

#include <stdio.h>
#include <time.h>

// Size of the square matrix
#define size 10000

// Global variable definition of matrices A and B
double A[size][size];
double B[size][size];
double C[size][size];

int main() {

    // initialize matrix A
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            A[i][j] = 1.12;

    printf("Size of matrix A: %lu bytes\n", sizeof(A));

    // initialize matrix B
    for (int e = 0; e < size; e++)
        for (int f = 0; f < size; f++)
            B[e][f] = 1.15;

    printf("Size of matrix B: %lu bytes\n", sizeof(B));

    // matrix C
    for (int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            C[r][c] = 0;
        }
    }
    //print size of matrix C
    printf("Size of C: %lu bytes\n", sizeof(C));

    // start matrix multiplication
    clock_t start = clock();
    double sum = 0;
    for (int row = 0; row < size; row++)
    {
        for (int column = 0; column < size; column ++)
        {
            for (int el = 0; el < size; el++)
            {
                sum = sum + A[row][el]*B[el][column];
            }
            C[row][column] = sum;
            sum = 0;
        }
    }
    // end of matrix mult
    clock_t end = clock();

    //Print execution time of the matrix multiplication
    double exec_time = (double)(end - start)/CLOCKS_PER_SEC;
    printf("Execution time: %lf secs\n", exec_time);

    //Print matrix C
    printf("C = [\n");
    for (int i = 0; i < size; i++)
    {
        printf("\t[");
        for (int j = 0; j < size; j++)
        {
            printf("%lf, ", C[i][j]);
        }
        printf("]\n");
    }
    printf("]\n");
    
}