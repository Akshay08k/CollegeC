// Write a program in C to calculate gross salary of employee using :
// 1. Gross Salary = Basic Pay + DA + HRA – PF.
// 2. DA = 30% If Basic Pay < 5000 otherwise DA = 45% of the Basic Pay.
// 3. HRA = 15% of Basic Pay.
// 4. PF = 12% of Basic Pay.

#include <stdio.h>
#include <conio.h>
void calculateGross(char name[20], int basic);
int main()
{
    char name[20];
    int basic;
    printf("Enter the name of employee : ");
    scanf("%s", name);
    printf("Enter the Basic : ");
    scanf("%d", &basic);
    calculateGross(name, basic);
    return 0;
}
void calculateGross(char name[20], int basic)
{
    float da, hra, pf;
    double GrossSal;
    if (basic < 5000)
    {
        da = basic * 0.45;
    }
    else
    {
        da = basic * 0.30;
    }
    hra = basic * 0.15;
    pf = basic * 0.12;
    GrossSal = basic + da + hra - pf;
    printf("\n\tName\tBasic\tDA\tHRA\tPF\tGross");
    printf("\n\t------------------------------------------");
    printf("\n\t%s\t%ld\t%.2f\t%.2f\t%.2f\t%.2f");
}
