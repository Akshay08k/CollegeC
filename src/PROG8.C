#include <stdio.h>
#include <conio.h>
float cel_to_fah(float);
int main()
{
	float cel;
	printf("Enter the celcius : ");
	scanf("%f", &cel);
	printf("The Fahrenheit is = %f", cel_to_fah(cel));
	return 0;
}
float cel_to_fah(float cel)
{
	return cel * 1.8 + 32;
}