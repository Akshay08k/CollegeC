// 22 - 42 + 62 - 82 + …………

#include <stdio.h>
void toggleOperation(int n);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    if (n < 22)
    {
        printf("Enter Number Above 22");
    }
    else
    {
        toggleOperation(n);
    }
    return 0;
}
void toggleOperation(int n)
{
    int sum = 0, i, flag = 1;
    for (i = 22; i <= n; i = i + 20)
    {
        if (flag == 1)
        {
            sum += i;
            printf("%d - ", i);
            flag = 0;
        }
        else
        {
            sum -= i;
            printf("%d + ", i);
            flag = 1;
        }
    }
    printf(" = %d", sum);
}
