#include <stdio.h>

#define SIZE 2

void addMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    int i, j, k;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void transposeMatrix(int a[SIZE][SIZE], int result[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            result[j][i] = a[i][j];
        }
    }
}

void displayMatrix(int matrix[SIZE][SIZE]) {
    int i, j;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int a[SIZE][SIZE], b[SIZE][SIZE];
    int addition[SIZE][SIZE], multiplication[SIZE][SIZE];
    int transpose[SIZE][SIZE];
    int i, j;

    printf("Enter elements of first 2x2 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second 2x2 matrix:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    addMatrices(a, b, addition);
    multiplyMatrices(a, b, multiplication);
    transposeMatrix(a, transpose);

    printf("\nAddition of matrices:\n");
    displayMatrix(addition);

    printf("\nMultiplication of matrices:\n");
    displayMatrix(multiplication);

    printf("\nTranspose of first matrix:\n");
    displayMatrix(transpose);

    return 0;
}
