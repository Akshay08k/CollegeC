#include <stdio.h>
#include <conio.h>
int convertToPaisa(float Rupees);
int main()
{
    float Rupees;
    int paisa;
    printf("Enter the the ruppess");
    scanf("%f", Rupees);
    printf("The Rupees in paisa = %d", convertToPaisa(Rupees));
    return 0;
}

int convertToPaisa(float Rupees)
{
    return (int)(Rupees * 100);
}
