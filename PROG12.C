#include <stdio.h>
#include <conio.h>
int calculate(int);
void main()
{
	int n;
	clrscr();
	printf("Enter the number N to know sum of 1toN number : ");
	scanf("%d", &n);

	printf("Sum 1 to N = %d", calculate(n));
	getch();
}
int calculate(int n)
{
	return n * (n + 1) / 2;
}