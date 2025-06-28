// A a A
// a A a
// A a A

#include <stdio.h>

int main()
{
    int i, j, flag = 1;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            if (flag == 1)
            {
                printf("A ");
                flag = 0;
            }
            else
            {
                printf("a ");
                flag = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
