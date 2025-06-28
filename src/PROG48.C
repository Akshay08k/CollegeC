// To check whether the given number is valid binary or not.

#include <stdio.h>
int isBinary(int);
int main()
{
    int Num;
    printf("Enter the Number : ");
    scanf("%d", &Num);
    printf(isBinary(Num) ? "Number Is Binary" : "The Number Is not binary");
    return 0;
}
int isBinary(int n)
{
    int original = n, remainder;
    while (n > 0)
    {
        remainder = n % 10;

        if (remainder != 0 && remainder != 1)
        {
            return 0;
        }

        n = n / 10;
    }

    return 1;
}
