// a b c d e
//  a b c d
//   a b c
//    a b
//     a

#include <stdio.h>

int main()
{
    int i, j, k, abc = 'a';
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k <= 5; k++)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("%c ", abc++);
        }
        abc = 'a';printf("\n");
    }
    return 0;
}
