#include<stdio.h>
#include<conio.h>
float cel_to_fah(float);
void main(){
	float cel;
	clrscr();
	printf("Enter the celcius : ");
	scanf("%f",&cel);
	printf("The Fahrenheit is = %f",cel_to_fah(cel));
	getch();
}
float cel_to_fah(float cel){
	return cel*1.8+32;
}