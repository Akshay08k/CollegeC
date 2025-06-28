#include <stdio.h>
#include <conio.h>
#include <math.h>
float calculateCompoundInterest(float principal, float rate, int time);
int main()
{
    float principal, rate, compoundInterest;
    int time;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the annual interest rate (in percentage): ");
    scanf("%f", &rate);
    rate = rate / 100;
    printf("Enter the time (in years): ");
    scanf("%d", &time);
    compoundInterest = calculateCompoundInterest(principal, rate, time);
    printf("The compound interest is: %.2f\n", compoundInterest);
    return 0;
}

float calculateCompoundInterest(float principal, float rate, int time)
{
    float amount;
    amount = principal * pow((1 + rate), time);
    return amount - principal;
}
