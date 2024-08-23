#include<stdio.h>
#include<conio.h>
float Area_tri(float,float);
void main(){
	float l,b;
	clrscr();
	printf("Enter the length and breadth : ");
	scanf("%f %f",&l,&b);
	printf("The Area of triangle is = %f",Area_tri(l,b));
	getch();
}
float Area_tri(float l,float b){
	return (l*b)/2;
}