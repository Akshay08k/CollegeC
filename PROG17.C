#include <stdio.h>
#include <conio.h>

int getRightmostDigit(float num); // declaration

void main()
{
    float num;
    clrscr();
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    // printing the answer
    printf("The rightmost digit of the integral part is: %d\n", getRightmostDigit(num));

    getch();
}

// definition of function
int getRightmostDigit(float num)
{
    int integralPart = (int)num;
    return integralPart % 10;
}