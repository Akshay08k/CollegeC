#include <stdio.h>
#include <conio.h>

float calculateWeeklyPay(float hourlyRate, int hoursWorked);
int main()
{
    float hourlyRate, weeklyPay;
    int hoursWorked;

    printf("Enter the hourly pay rate: ");
    scanf("%f", &hourlyRate);
    printf("Enter the number of hours worked in a week: ");
    scanf("%d", &hoursWorked);
    weeklyPay = calculateWeeklyPay(hourlyRate, hoursWorked);
    printf("The weekly pay is: %.2f\n", weeklyPay);
    return 0;
}

float calculateWeeklyPay(float hourlyRate, int hoursWorked)
{
    float overtimeRate = 1.5 * hourlyRate;
    int regularHours = 40;
    float pay;
    if (hoursWorked <= regularHours)
    {
        pay = hourlyRate * hoursWorked; // No overtime
    }
    else
    {
        pay = (hourlyRate * regularHours) + (overtimeRate * (hoursWorked - regularHours)); // With overtime
    }

    return pay;
}