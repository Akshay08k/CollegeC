// 1 2 3 4
// 5 6 7
// 8 9
// 10

#include <stdio.h>

int main()
{
    int i, j, k = 1;
    for (i = 4; i >= 1; i--)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}
