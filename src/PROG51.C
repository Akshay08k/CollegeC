// To check whether the giver number is palindrome or not.

#include <stdio.h>
int reverse(int);
int isPalindrome(int);
int main()
{
    int Num;
    printf("Enter Number : ");
    scanf("%d", &Num);
    if (isPalindrome(Num))
    {
        printf("\n%d Number is Palindrome", Num);
    }
    else
    {
        printf("\n%d is not palindrome number", Num);
    }
    return 0;
}
int reverse(int Num)
{
    int Original = Num, rem, rev = 0;
    while (Num > 0)
    {
        rem = Num % 10;
        rev = (rev * 10) + rem;
        Num = Num / 10;
    }
    return rev;
}
int isPalindrome(int Num)
{
    if (Num == reverse(Num))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}