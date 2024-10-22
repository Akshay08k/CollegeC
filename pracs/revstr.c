#include <stdio.h>
#include <string.h>
void revstr(char str[100]);
int isPalindrome(char str[100], char revstr[100]);
int main()
{
    char str[100], originalstr[strlen(str) + 1];

    int j = strlen(str) - 1, i;
    for (i = 0; i <= strlen(str);)
    {
        i++;
        j--;
        originalstr[i++] = str[j--];
    };
    originalstr[i] = '\0';
    printf("Enter a string: ");
    scanf("%s", str);
    revstr(str);
    printf("The original string is: %s\n\n", originalstr);
    if (isPalindrome(originalstr, str))
    {
        printf("\n%s is a palindrome", str);
    }
    else
    {
        printf("\n%s is not a palindrome", str);
    }
    return 0;
}

void revstr(char str[100])
{
    char temp;
    int i, j;
    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("The reversed string is: %s\n\n", str);
}
int isPalindrome(char str[100], char revstr[100])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] != revstr[i])
        {
            return 0;
        }
        return 1;
    }
}