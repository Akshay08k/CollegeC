// A
// A B
// A B C
// A B C D
// A B C D E 
#include <stdio.h>
int main()
{
    int i, j, k, abc = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
                printf("%c", abc++);
            
        }
        abc = 'A';
        printf("\n");
    }
}