#include <stdio.h>
#include <conio.h>

void convertDays(int total_days);

void main()
{
    int total_days;
    clrscr();
    printf("Enter the number of days: ");
    scanf("%d", &total_days);
    convertDays(total_days);
    getch();
}

void convertDays(int total_days)
{
    int years, months, weeks, days;
    years = total_days / 365;
    total_days %= 365;

    months = total_days / 30;
    total_days %= 30;
    weeks = total_days / 7;
    days = total_days % 7;
    printf("%d days is equivalent to %d years, %d months, %d weeks, and %d days.\n", total_days, years, months, weeks, days);
}
