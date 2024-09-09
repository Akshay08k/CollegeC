// X + X^3/3! + X^5/5! + X^7/7! + ….+n

#include <stdio.h>
#include <math.h>
long int factorial(int n);
int main()
{
    int n, i;
    float x, sum = 0;

    printf("Enter the value of X: ");
    scanf("%f", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        sum += pow(x, i) / factorial(i);
        printf("%.2f ^ %d /%d! + ", x, i, i);
    }

    printf("= %.2f", sum);

    return 0;
}
long int factorial(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}
