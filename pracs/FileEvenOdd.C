#include <stdio.h>
int main()
{
    FILE *data, *odd, *even;
    int num;

    data = fopen("data.txt", "r");
    odd = fopen("odd.txt", "w");
    even = fopen("even.txt", "w");

    if (data == NULL || odd == NULL || even == NULL)
    {
        printf("Error Opening Files..\n");
        return 1;
    }

    while (fscanf(data, "%d", &num) == 1)
    {
        if (num % 2 == 0)
        {
            printf("Even = %d\n", num);
            fprintf(even, "%d ", num);
        }
        else
        {
            printf("Odd = %d\n", num);
            fprintf(odd, "%d ", num);
        }
    }

    fclose(data);
    fclose(odd);
    fclose(even);

    return 0;
}
