#include <stdio.h>
#include <conio.h>
int vol_cube(long int, long int, long int);
void main()
{
	long int l, b, h;
	clrscr();
	printf("Enter the Length breadth height : ");
	scanf("%ld %ld %ld", &l, &b, &h);
	printf("Volume of cube is %ld", vol_cube(l, b, h));
	getch();
}
int vol_cube(long int l, long int b, long int h)
{
	return l * b * h;
}
