#include <stdio.h>
#include <conio.h>
#define PI 3.14
float circu_circle(float);
int main()
{
	float rad;
	printf("Enter The Radius : ");
	scanf("%f", &rad);
	printf("The circumference of circle is = %f", circu_circle(rad));
	return 0;
}
float circu_circle(float rad)
{
	return 2 * PI * rad;
}