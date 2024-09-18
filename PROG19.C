#include <stdio.h>
#include <conio.h>
#define PI 3.14
float convertToRad(float degrees);

int main()
{
    float degrees;
    printf("Enter the angle in degrees: ");
    scanf("%f", &degrees);
    printf("Angle in radians: %.4f\n", convertToRad(degrees));
    return 0;
}

float convertToRad(float degrees)
{
    return (degrees * PI) / 180;
}