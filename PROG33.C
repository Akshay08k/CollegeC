#include <stdio.h>
#include <conio.h>
void calNetSalary(char name[30], int basic, int level);
int main()
{
    char name[30];
    int basic, level;
    printf("Enter the name of employee : ");
    scanf("%s", name);
    printf("Enter the basic : ");
    scanf("%d", &basic);
    printf("Enter the level : ");
    scanf("%d", &level);
    if (level >= 5)
    {
        printf("Enter valid Level");
    }
    else
    {
        calNetSalary(name, basic, level);
        return 0;
    }
}

void calNetSalary(char name[30], int basic, int level)
{
    int perks, HRA;
    int incomeTax, Gross, NetSalary;
    HRA = basic * 0.10;
    if (level == 1)
    {
        // CA = 1000
        // EA = 500
        perks = 1000 + 500;
    }
    else if (level == 2)
    {
        // CA = 750
        // EA = 200
        perks = 750 + 200;
    }
    else if (level == 3)
    {
        // CA = 500
        // EA = 100
        perks = 500 + 100;
    }
    else if (level == 4)
    {
        // CA = 250
        // EA = 0
        perks = 200 + 0;
    }

    // Gross Salary = Basic + HRA + Perks ( HRA = 10% of Basic)
    Gross = basic + HRA + perks;

    if (Gross < 2000)
    {
        incomeTax = 1;
    }
    else if (Gross >= 2000 && Gross <= 3999)
    {
        incomeTax = basic * 0.3;
    }
    else if (Gross >= 4000 && Gross <= 4999)
    {
        incomeTax = basic * 0.5;
    }
    else if (Gross > 5000)
    {
        incomeTax = basic * 0.8;
    }
    // Net Salary = Gross Salary – Income Tax
    NetSalary = Gross - incomeTax;
    printf("\n\tName\tBasic\tLevel\tGross\tNetSalary");
    printf("\n\t--------------------------------------------");
    printf("\n\t%s\t%d\t%d\t%d\t%d");
}