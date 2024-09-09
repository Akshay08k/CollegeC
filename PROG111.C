// 1 / 12 - 1 / 22 + 1 / 32 - 1 / 42 +….n terms
#include <stdio.h>
#include <math.h>
void series(int n);
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
    float sum = 0;
    int i, flag = 1;
    for (i = 1; i <= n; i++)
    {
        if (flag == 1)
        {
            flag = 0;
            sum = sum + 1.0 / pow(i, 2);
            printf("1/%.1f - ", pow(i, 2));
        }
        else
        {
            flag = 1;
            sum = sum - 1.0 / pow(i, 2);
            printf("1/%f + ", pow(i, 2));
        }
    }

    printf("The sum of the series is: %.6f\n", sum);
}