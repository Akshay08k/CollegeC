// 1 2 3 4
// 1 2 3
// 1 2
// 1
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
        k = 1;
    }
    return 0;
}
