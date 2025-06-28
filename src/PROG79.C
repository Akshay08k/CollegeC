// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include <stdio.h>
int main()
{
    int i, j, k, abc = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("%c", abc++);
            }
            else
            {
                printf("%d", j);
            }
        }
        abc = 'A';
        printf("\n");
    }
}