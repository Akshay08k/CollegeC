//  1 4 9 16 25
//  1 4 9 16
//  1 4 9
//  1 4
//  1

#include <stdio.h>

int main()
{
    int i, j, k, p = 1;
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k <= 5; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", p * p);
            p++;
        }
        p = 1;
        printf("\n");
    }
    return 0;
}
