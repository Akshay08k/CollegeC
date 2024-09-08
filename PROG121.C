/*
 * Program 121: write a program to print matrix and its transpose
 */

#include <stdio.h>

int main()
{
    int i, j, matrix[30][30], transpose[30][30], m1, m2;
    printf("Enter the size of matrix : ");
    scanf("%d %d", &m1, &m2);
    for (i = 1; i <= m1; i++)
    {
        for (j = 1; j <= m2; j++)
        {
            printf("Enter %d %d th Value :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nNormal Matrix  \n");
    for (i = 1; i <= m1; i++)
    {
        for (j = 1; j <= m2; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Transpose Of Matrix..\n");
    for (i = 1; i <= m1; i++)
    {
        for (j = 1; j <= m2; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (i = 1; i <= m1; i++)
    {
        for (j = 1; j <= m2; j++)
        {
            printf("%d", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
