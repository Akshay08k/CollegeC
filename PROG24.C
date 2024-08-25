#include <stdio.h>
#include <conio.h>
void CheckNum(int num);
void main()
{
    int num;
    clrscr();
    printf("Enter the Number : ");
    scanf("%d", &num);
    CheckNum(num);
    getch();
}
void CheckNum(int num)
{
    if (num > 0)
    {
        printf("%d is positive  number", num);
    }
    else if (num < 0)
    {
        printf("%d is Negative  number", num);
    }
    else
    {
        printf("%d is zero", num);
    }
}