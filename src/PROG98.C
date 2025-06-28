// 12 + 22 + 32 + 42 + 52+ ….+n

#include <stdio.h>

void sumPlusTwo(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    sumPlusTwo(n);
    return 0;
}
void sumPlusTwo(int n)
{
    int sum = 0, i;
    for (i = 12; i <= n; i = i + 10)
    {
        sum += i;
        printf("%d + ", i);
    }
    printf("= %d", sum);
}
