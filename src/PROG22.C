#include <stdio.h>
#include <conio.h>
void printNum(long int num);
int main()
{
    long int num;
    printf("Enter the Number : ");
    scanf("%ld", &num);
    printNum(num);
    return 0;
}
void printNum(long int num)
{
    int hours, minutes, seconds;

    hours = num / 3600;
    minutes = (num % 3600) / 60;
    seconds = num % 60;

    printf("%d seconds is equal to %d hour(s), %d minute(s), and %d second(s).\n",
           num, hours, minutes, seconds);
}