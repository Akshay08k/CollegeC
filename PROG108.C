// x +x^2 +x^3 +x^4 +….+x^n

#include <stdio.h>
#include <math.h>

void series(int x, int n);
int main()
{
    int x, n;
    printf("Enter the X : ");
    scanf("%d", &x);
    printf("Enter the N : ");
    scanf("%d", &n);
    series(x, n);
    return 0;
}
void series(int x, int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + pow(x, i);
        printf("%.0f + ", pow(x, i));
    }
    printf("= %d", sum);
}