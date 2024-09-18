#include <stdio.h>
#include <conio.h>
int sum1toN(int n);
int main()
{
    int n;
    printf("Enter the n to sum 1 to N : ");
    scanf("%d", &n);
    printf("Sum of 1 TO %d", n, sum1toN(n));
    return 0;
}
int sum1toN(int n)
{
    int i, sum = 0;
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}