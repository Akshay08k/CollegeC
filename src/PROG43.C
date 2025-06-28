// Write a C program to read 4-digit number and print the sum of first and last digit of
// the number.

#include <stdio.h>

int main()
{
    int number, firstDigit, lastDigit, sum;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    lastDigit = number % 10;

    firstDigit = number / 1000;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits is: %d\n", sum);

    return 0;
}
