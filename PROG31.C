

#include <stdio.h>
#include <conio.h>
void isEligible(char name[20], int phy, int chem, int Math);
void main()
{
    char name[20];
    int phy, chem, Math;
    clrscr();
    printf("Enter the Name Of Student : ");
    scanf("%s", name);
    printf("Enter the Marks Of (Phy Chem Maths) : ");
    scanf("%d %d %d", &phy, &chem, &Math);
    isEligible(name, phy, chem, Math);
    getch();
}
void isEligible(char name[20], int phy, int chem, int Math)
{
    int total = Math + phy + chem;
    if ((Math >= 50 && phy >= 45 && chem >= 60 && total >= 170) || (Math + phy) >= 120)
    {
        printf("Student is eligible for Admission");
    }
    else
    {
        printf("Student is not eligible for admission");
    }
}
