// Write a program to accept numbers from the user till their sum
#include <stdio.h>

int main()
{
    int sum = 0, mainsum = 0;

    while (mainsum <= 50)
    {
        printf("Enter a number: ");
        scanf("%d", &sum);
        mainsum += sum;
        printf("Current total: %d\n", mainsum);
    }

    printf("Final total sum: %d, which exceeds 50.\n", mainsum);
    return 0;
}
