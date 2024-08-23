#include <stdio.h>
#include <conio.h>
#define PI 3.14
float convertToRad(float degrees);

void main()
{
    float degrees;
    clrscr();
    printf("Enter the angle in degrees: ");
    scanf("%f", &degrees);
    printf("Angle in radians: %.4f\n", convertToRad(degrees));
    getch();
}

float convertToRad(float degrees)
{
    return (degrees * PI) / 180;
}