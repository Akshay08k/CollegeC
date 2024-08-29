#include <stdio.h>
#include <conio.h>
int sum1toN(int n);
void main()
{
    int n;
    clrscr();
    printf("Enter the n to sum 1 to N : ");
    scanf("%d", &n);
    printf("Sum of 1 TO %d", n, sum1toN(n));
    getch();
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