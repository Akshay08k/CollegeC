// Write a program to check whether the given number is prime or not.
#include <stdio.h>
#include <conio.h>
int isPrime(int n);
void main()
{
    int n;
    clrscr();
    printf("Enter the Number : ");
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("It is prime Number");
    }
    else
    {
        printf("It is not prime number");
    }
    // return 0;
    getch();
}
int isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // If N is divisible by any number in this range, it
        // is not prime
        if (n % i == 0)
        {
            return false;
        }
    }
    // If no divisors are found, it is prime
    return true;
}