#include <stdio.h>
#include <conio.h>
float area_tri(float, float);
int main()
{
    float base, height;

    printf("Enter the base and height of triangle : ");
    scanf("%f %f", &base, &height);
    printf("The Area of right angle triangle is = %f", area_tri(base, height));
    return 0;
}
float area_tri(float b, float h)
{
    return 0.5 * (b * h);
}