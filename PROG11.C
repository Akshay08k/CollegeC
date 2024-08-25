#include <stdio.h>
#include <conio.h>
float simp_interest(float, float, float);
void main()
{
	float P, R, N;
	clrscr();
	printf("\nEnter the Principal Amount : ");
	scanf("%f", &P);
	printf("\nEnter the ROI - And Number of Years : ");
	scanf("%f %f", &R, &N);
	printf("\n\tThe Simple Interest is = %f", simp_interest(P, R, N));
	getch();
}
float simp_interest(float p, float r, float n)
{
	return p * r * n / 100;
}