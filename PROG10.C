#include<stdio.h>
#include<conio.h>
#define PI 3.14
float circu_circle(float);
void main(){
	float rad;
	clrscr();
	printf("Enter The Radius : ");
	scanf("%f",&rad);
	printf("The circumference of circle is = %f",circu_circle(rad));
	getch();
}
float circu_circle(float rad){
	return 2 * PI * rad;
}