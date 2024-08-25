#include <stdio.h>
#include <conio.h>
void findLeapYear(int year);
void main()
{
    int year;
    clrscr();
    printf("Enter the year : ");
    scanf("%d", &year);
    findLeapYear(year);
    getch();
}
void findLearYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
}