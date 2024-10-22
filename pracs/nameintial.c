#include <stdio.h>
#include <string.h>

int main()
{
    char name[100], initials[10];
    int i, j = 0;

    printf("Enter The Name: ");
    fgets(name, sizeof(name), stdin); // Use fgets to capture a full name, including spaces

    // Store the first initial
    initials[j++] = name[0];

    // Find spaces and store the next character as initial
    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != '\n')
        {
            initials[j++] = name[i + 1];
        }
    }

    initials[j] = '\0'; // Null-terminate the initials string

    printf("Initials of The Name: %s\n", initials);

    return 0;
}
