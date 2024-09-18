#include <stdio.h>
#include <conio.h>
int Factorial(int fact);
int main()
{
    int fact;
    printf("Enter the Number to print Factorial : ");
    scanf("%d", &fact);
    printf("Factorial = %d", Factorial(fact));
    return 0;
}
int Factorial(int fact)
{
    if (fact == 0 || fact == 1)
    {
        return 1;
    }
    return fact * Factorial(fact - 1);
}