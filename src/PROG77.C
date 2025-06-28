// 6 5 4
// 2 3
// 1

#include <stdio.h>

int main()
{
    int i, j, k, p = 6;
    for (i = 3; i >= 1; i--)
    {
        for (k = i; k <= 3; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", p--);
        }
        printf("\n");
    }
    return 0;
}
