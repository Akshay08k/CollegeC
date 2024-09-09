// 1^2 + 2^2 + 3^2+ ......n^2

#include <stdio.h>
void sumofNpower(int n);
int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);
    sumofNpower(n);
    return 0;
}
void sumofNpower(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + (i * i);
        printf("%d^2 + ", i);
    }
    printf(" = %d", sum);
}