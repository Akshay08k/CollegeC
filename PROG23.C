#include <stdio.h>
#include <conio.h>
int findMax(int a, int b);
void main()
{
    int a, b;
    clrscr();
    printf("Enter the Numbers (a b) : ");
    scanf("%d %d", &a, &b);
    printf("Maximum Number Is = %d", findMax(a, b));
    getch();
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