//PROGRAM NUMBER 38 SKIPPED BECAUSE IT IS SAME
#include <stdio.h>
#include <conio.h>
void PrintTable(int N);
int main()
{
    int n;
    printf("Enter the N : ");
    scanf("%d", &n);
    PrintTable(n);
    return 0;
}
void PrintTable(int N)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d  = %d\n", N, i, N * i);
    }
}