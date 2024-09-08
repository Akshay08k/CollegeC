// 1 2 3
// 5 4
// 6
#include <stdio.h>

int main()
{
    int i, j, k, p = 1;
    for (i = 3; i >= 1; i--)
    {
        for (k = i; k <= 3; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%d", p++);
        }
        printf("\n");
    }
    return 0;
}
