#include <stdio.h>
#include <conio.h>
int calculator(int a, int b, char op);
void main()
{
    int a, b;
    char op;
    clrscr();
    printf("Enter the Equation to calculate ex(10 + 20): ");
    scanf("%d %c %d", &a, &op, &b);
    printf("%d %c %d = %d", &a, &op, &b, calculator(a, b, op));
    getch();
}
int calculator(int a, int b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    default:
        break;
    }
}