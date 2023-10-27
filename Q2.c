#include <stdio.h>
/**
 * 2 D integer array
Write a C program using functions and pointers for the following
1. Read and display n*n matrix
2. Calculate the row total of a given matrix
3. Check whether the given matrix is identity matrix or not

*/

void q1()
{
    int i, j, n;

    printf("Enter row and column size: ");
    scanf("%d", &n);

    int array[n][n];

    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("a[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    printf("\nMatrix read is:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }

    printf("\nRow Totals:\n");
    for (i = 0; i < n; i++)
    {
        int row_total = 0;
        for (j = 0; j < n; j++)
            row_total += array[i][j];
        printf("[%d]: %d\n", j, row_total);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (array[i][j] != 1)
            {
                printf("\nMatrix is Not Identity Matrix\n");
                return;
            }
        }
    }
    printf("\nMatrix is Identity Matrix\n");
}

void main()
{
    q1();
}