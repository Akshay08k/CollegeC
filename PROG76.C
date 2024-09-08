// 9 8 7
// 6 5 4
// 3 2 1
#include <stdio.h>
int main()
{
    int i, j, k = 9;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%d ", k--);
        }
        printf("\n");
    }
}