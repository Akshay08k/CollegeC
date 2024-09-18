#include <stdio.h>
#include <conio.h>
int findMax(int a, int b);
int main()
{
    int a, b;
    printf("Enter the Numbers (a b) : ");
    scanf("%d %d", &a, &b);
    printf("Maximum Number Is = %d", findMax(a, b));
    return 0;
}
int findMax(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}