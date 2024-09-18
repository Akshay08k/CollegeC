#include <stdio.h>
#include <conio.h>
#define PI 3.14
float area_circle(float rad);
int main()
{
	float rad, area;
	printf("Enter the radius : ");
	scanf("%f", &rad);
	area = area_circle(rad);
	printf("The area of circle is = %f", area);
	return 0;
}
float area_circle(float rad)
{
	return PI * rad * rad;
}