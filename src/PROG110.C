// 1 +1/4 +1/9 +1/16 +….n terms

#include <stdio.h>
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
    int i;
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (i * i);
        printf("1/%d + ", i * i);
    }

    printf("= %.2f\n", sum);
}