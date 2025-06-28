#include <stdio.h>
#include <conio.h>
void weeknames(int day);
int main()
{
    int day;
    printf("Enter the Number of Day : ");
    scanf("%d", &day);
    weeknames(day);
    return 0;
}
void weeknames(int day)
{
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("thursday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Enter Valid Day");
        break;
    }
}