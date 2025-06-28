//  1+2+3+….+n

#include <stdio.h>
void sumPlussum(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    sumPlussum(n);
    return 0;
}
void sumPlussum(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i++)
    {
        sum += i;
        printf("%d + ", i);
    }
    printf("= %d", sum);
}