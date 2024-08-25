#include <stdio.h>
#include <conio.h>
#define PI 3.14
float area_circle(float rad);
void main()
{
	float rad, area;
	clrscr();
	printf("Enter the radius : ");
	scanf("%f", &rad);
	area = area_circle(rad);
	printf("The area of circle is = %f", area);
	getch();
}
float area_circle(float rad)
{
	return PI * rad * rad;
}