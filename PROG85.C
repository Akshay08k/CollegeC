#include <stdio.h>

int main()
{
    int rows, i, j, num = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                num = 1; 
            } else {
                num = num * (i - j + 1) / j; 
            }
            printf("%4d", num);  
        }
        printf("\n");  
    }

    return 0;
}
