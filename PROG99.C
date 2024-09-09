// 22 + 42 + 62 + 82 + ….+n

#include <stdio.h>

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
    for (i = 22; i <= n; i = i + 20)
    {
        sum += i;
        printf("%d + ", i);
    }
    printf("= %d", sum);
}
