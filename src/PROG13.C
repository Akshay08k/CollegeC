#include <stdio.h>
#include <conio.h>
#include <math.h>

float calculateVolume(float r);
float calculateSurfaceArea(float r);

int main()
{
    float r;

    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    printf("Volume of the sphere: %.2f\n", calculateVolume(r));
    printf("Surface area of the sphere: %.2f\n", calculateSurfaceArea(r));
    return 0;
}

float calculateVolume(float r)
{
    const float PI = 3.14159;
    return (4.0 / 3.0) * PI * pow(r, 3);
}

float calculateSurfaceArea(float r)
{
    const float PI = 3.14159;
    return 4 * PI * pow(r, 2);
}
