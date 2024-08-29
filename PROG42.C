#include <stdio.h>
void printOddFive();
int main()
{
    printOddFive();

    return 0;
}
void printOddFive()
{
    int count = 0;
    int number = 1;

    while (count < 50)
    {
        printf("%d\t", number);
        count++;

        if (count % 5 == 0)
        {

            printf("\n");
        }

        number += 2;
    }
}