#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf("*");
        }
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf(" ");
        }

        for (j = 4z; j >= i + 1; j--)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}