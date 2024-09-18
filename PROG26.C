#include <stdio.h>
#include <conio.h>
void findLeapYear(int year);
int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    findLeapYear(year);
    return 0;
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