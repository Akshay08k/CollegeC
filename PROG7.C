#include <stdio.h>
#include <conio.h>
float fah_to_cel(float fah);
void main()
{
	float fah;
	printf("Enter the fahrenheit : ");
	scanf("%f", &fah);
	printf("\n\tcelcius = %f", fah_to_cel(fah));
	getch();
}
float fah_to_cel(float fah)
{
	return (fah - 32) * 5 / 9;
}