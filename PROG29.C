#include <stdio.h>
#include <conio.h>
void printDigitInWords(char digit);
int main()
{
    char number[5];
    int i;
    clrscr();
    printf("Enter a 4-digit number: ");
    scanf("%4s", number);

    if (number[0] && number[1] && number[2] && number[3] && number[4] == '\0')
    {
	for (i = 0; i < 4; ++i)
	{
	    printDigitInWords(number[i]);
	}
	printf("\n");
    }
    else
    {
	printf("Invalid input! Please enter a 4-digit number.\n");
    }
    getch();
}
void printDigitInWords(char digit)
{
    switch (digit)
    {
    case '0':
	printf("Zero ");
	break;
    case '1':
	printf("One ");
	break;
    case '2':
	printf("Two ");
	break;
    case '3':
	printf("Three ");
	break;
    case '4':
	printf("Four ");
	break;
    case '5':
	printf("Five ");
	break;
    case '6':
	printf("Six ");
	break;
    case '7':
	printf("Seven ");
	break;
    case '8':
	printf("Eight ");
	break;
    case '9':
	printf("Nine ");
	break;
    }
}
