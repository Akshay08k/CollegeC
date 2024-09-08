// a b c
// d e f
// g h i

#include <stdio.h>

int main()
{
    int i, j, abc = 'a';
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("%c ", abc++);
        }
        printf("\n");
    }
    return 0;
}
