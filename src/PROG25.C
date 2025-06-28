#include <stdio.h>
#include <conio.h>
void arrangeNum(int a, int b, int c);
int main()
{
	int a, b, c;
	printf("Enter 3 Number(a b c) : ");
	scanf("%d %d %d", &a, &b, &c);
	arrangeNum(a, b, c);
	return 0;
}
void arrangeNum(int a, int b, int c)
{
	if (a < b && a < c)
	{
		if (b < c)
		{
			printf("Accessding Order %d %d %d", a, b, c);
		}
		else
		{
			printf("Accessding Order %d %d %d", a, c, b);
		}
	}
	else if (b < a && b < c)
	{
		if (a < c)
		{
			printf("Accessding Order %d %d %d", b, a, c);
		}
		else
		{
			printf("Accessding Order %d %d %d", b, c, a);
		}
	}
	else
	{
		if (a < b)
		{
			printf("Accessding Order %d %d %d", c, a, b);
		}
		else
		{
			printf("Accessding Order %d %d %d", c, b, a);
		}
	}
}