#include <stdio.h>
#include <conio.h>
void printNum(long int num);
void main()
{
    long int num;
    clrscr();
    printf("Enter the Number : ");
    scanf("%ld", &num);
    printNum(num);
    getch();
}
void printNum(long int num)
{
    int hours, minutes, seconds;
    // Calculate hours, minutes, and seconds
    hours = num / 3600;
    minutes = (num % 3600) / 60;
    seconds = num % 60;

    printf("%d seconds is equal to %d hour(s), %d minute(s), and %d second(s).\n",
           num, hours, minutes, seconds);
}