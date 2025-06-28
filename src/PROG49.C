// To check whether the given number is valid octal or not.

#include <stdio.h>
int isOctal(int);
int main()
{
    int Num;
    printf("Enter the Number : ");
    scanf("%d", &Num);
    printf(isOctal(Num) ? "Number Is Octal" : "The Number Is not Octal");
    return 0;
}
int isOctal(int n)
{
    int original = n;
    while (n > 0)
    {
        int remainder = n % 10;

        // Octal digits range from 0 to 7
        if (remainder < 0 || remainder > 7)
        {
            return 0;
        }

        n = n / 10;
    }

    return 1;
}
