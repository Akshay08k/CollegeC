#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 6; i++)
    {
        for (k = 6; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    for (i = 1; i <= 5; i++)
    {
        // Print leading spaces
        for (k = 1; k <= i; k++)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            if (j == 5 || j == i)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
