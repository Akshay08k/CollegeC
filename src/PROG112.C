// S = x + (x2 / 2 !) + (x4 / 4 !) + (x6 / 6 !) +….+ (xn / n !)
#include <stdio.h>
#include <math.h>

long int factorial(int n);
void series(float x, int n);

int main()
{
    int n;
    float x;

    printf("Enter the X: ");
    scanf("%f", &x);
    printf("Enter the N: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("N should be a non-negative integer.\n");
        return 1;
    }

    series(x, n);

    return 0;
}

long int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void series(float x, int n)
{
    int i;
    float sum = 0;

    for (i = 0; i <= n; i += 2)
    {
        float term = pow(x, i) / factorial(i);
        sum += term;
        printf("%.2f / %d! ", pow(x, i), factorial(i));
        if (i != n && i + 2 <= n)
        {
            printf("+ ");
        }
    }

    printf("= %.6f\n", sum);
}
