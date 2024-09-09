// 1/1! +1/2! +1/3! +….1/n!

#include <stdio.h>
void series(int n);
long int factorial(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    series(n);
    return 0;
}
void series(int n)
{
    int i;
    float sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = (float)sum + 1.0 / factorial(i);
        printf("1/%d + ", factorial(i));
    }
    printf(" = %.2f", sum);
}
long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
