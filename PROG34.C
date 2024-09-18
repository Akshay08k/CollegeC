#include <stdio.h>
#include <conio.h>
void billGenerator(int billNo, char cmp[10], int units);
int main()
{
    int billNo, units;
    char cmp[10];
    printf("Enter Billno And Company Name : ");
    scanf("%d %s", &billNo, cmp);
    printf("Enter the Units Consumed : ");
    scanf("%d", &units);
    billGenerator(billNo, cmp, units);
    return 0;
}

void billGenerator(int billNo, char cmp[10], int units)
{
    float charges;
    if (units <= 49)
    {
        charges = units * 2.30;
    }
    else if (units >= 50 && units <= 99) // For the next 50 units
    {
        charges = (50 * 2.30) + (units - 50) * 2.60;
    }
    else if (units >= 100 && units <= 249) // For the next 150 units
    {
        charges = (50 * 2.30) + (50 * 2.60) + (units - 100) * 3.25;
    }
    else if (units >= 250) // For units greater than 250
    {
        charges = (50 * 2.30) + (50 * 2.60) + (150 * 3.25) + (units - 250) * 4.35;
    }
    printf("\n\tBillNo\tName\tUnits\tCharges");
    printf("\n\t------------------------------------");
    printf("\n\t%d\t%s\t%d\t%f", billNo, cmp, units, charges);
}