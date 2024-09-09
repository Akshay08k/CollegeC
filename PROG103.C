// 1! +2! +3! +4! +….n!

#include <stdio.h>
long int factorial(int n);
int main()
{
    int n;
    printf("Enter Number n : ");
    scanf("%d", &n);
    printf("factorial = %d", factorial(n));
    return 0;
}
long int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}