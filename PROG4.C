#include <stdio.h>
#include <conio.h>
void Area_rect(int l, int b);
int main()
{
	int l, b;
	printf("Enter the length and breadth : ");
	scanf("%d %d", &l, &b);
	Area_rect(l, b);
	return 0;
}
void Area_rect(int l, int b)
{
	printf("\n The Area of Rectangle = %d", l * b);
}
