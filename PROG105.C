// 1/22 + 1/42 + 1/62 + 1/82 + ….+n

#include <stdio.h>
void series(int n);
long int factorial(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    if (n < 22)
    {
        printf("pleaser enter 22 or higher");
    }
    else
    {
        series(n);
    }

    return 0;
}
void series(int n)
{
    int i;
    float sum = 0;
    for (i = 22; i <= n; i = i + 20)
    {
        sum = sum + 1.0 / i;
        printf("1/%d + ", i);
    }
    printf("= %.2f", sum);
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
