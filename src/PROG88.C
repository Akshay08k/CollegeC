// 1
// 1 3
// 1 3 5
// 1 3 5 7
// ………………n

#include <stdio.h>
int main()
{
    int i, j, k, num;
    printf("Enter the value of N : ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {
        num = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d", num);
            num = num + 2;
        }
        printf("\n");
    }

    return 0;
}