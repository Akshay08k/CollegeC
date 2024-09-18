#include <stdio.h>
#include <conio.h>

int getRightmostDigit(float num); // declaration

int main()
{
    float num;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    // printing the answer
    printf("The rightmost digit of the integral part is: %d\n", getRightmostDigit(num));
    return 0;
}

// definition of function
int getRightmostDigit(float num)
{
    int integralPart = (int)num;
    return integralPart % 10;
}