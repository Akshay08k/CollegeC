// 1 +2 +4 +8 +16 +32 +….n terms

#include <stdio.h>

void sumPlusNumDouble(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    sumPlusNumDouble(n);
    return 0;
}
void sumPlusNumDouble(int n)
{
    int sum = 0, i;
    for (i = 1; i <= n; i = i + i)
    {
        sum += i;
        printf("%d + ", i);
    }
    printf("= %d", sum);
}
