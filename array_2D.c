#include <stdio.h>

void matrixAddition(int m, int n, int a[][n], int b[][n], int result[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrixSubtraction(int m, int n, int a[][n], int b[][n], int result[][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
}

void matrixMultiplication(int m, int n, int p, int a[][n], int b[][p], int result[][p])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main()
{
    int m, n, p;

    printf("Enter the number of rows and columns for matrix A: ");
    scanf("%d %d", &m, &n);

    printf("Enter the number of columns for matrix B: ");
    scanf("%d", &p);

    int matrixA[m][n], matrixB[n][p], result[m][p];

    printf("Enter elements of matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrixA[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            scanf("%d", &matrixB[i][j]);
        }
    }

    matrixMultiplication(m, n, p, matrixA, matrixB, result);

    printf("Matrix A * Matrix B:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("----------2-D ARRAY---------\n");
}