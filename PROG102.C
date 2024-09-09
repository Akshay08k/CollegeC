// 1 +4 -9 +16 -25 +36 ….+n2

#include <stdio.h>
void toggleOpsPower(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    toggleOpsPower(n);
    return 0;
}
void toggleOpsPower(int n)
{
    int i, sum = 0, flag = 1;
    for (i = 1; i <= n; i++)
    {
        if (flag == 1)
        {
            sum = sum + (i * i);
            printf("%d - ", i * i);
            flag = 0;
        }
        else
        {
            sum = sum - (i * i);
            printf("%d + ", i * i);
            flag = 1;
        }
    }
    printf(" = %d", sum);
}
