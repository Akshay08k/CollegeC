#include <stdio.h>
#include <conio.h>
int add(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int sub(int a, int b);
int main()
{
	int a, b;
	printf("Enter the Number A & B : ");
	scanf("%d %d", &a, &b);
	printf("\n%d + %d = %d", a, b, add(a, b));
	printf("\n%d * %d = %d", a, b, mul(a, b));
	printf("\n%d / %d =  %d", b, a, div(a, b));
	printf("\n%d - %d = %d",
		   a, b, sub(a, b));
	return 0;
}
int add(int a, int b)
{
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}
int div(int a, int b)
{
	return b / a;
}
int mul(int a, int b)
{
	return a * b;
}
