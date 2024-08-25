#include <stdio.h>
#include <conio.h>
int convertToPaisa(float Rupees);
void main()
{
    float Rupees;
    int paisa;
    clrscr();
    printf("Enter the the ruppess");
    scanf("%f", Rupees);
    printf("The Rupees in paisa = %d", convertToPaisa(Rupees));
    getch();
}

int convertToPaisa(float Rupees)
{
    return (int)(Rupees * 100);
}
