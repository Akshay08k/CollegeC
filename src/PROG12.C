#include <stdio.h>
#include <conio.h>
int calculate(int);
int main()
{
	int n;
	printf("Enter the number N to know sum of 1toN number : ");
	scanf("%d", &n);

	printf("Sum 1 to N = %d", calculate(n));
	return 0;
}
int calculate(int n)
{
	return n * (n + 1) / 2;
}