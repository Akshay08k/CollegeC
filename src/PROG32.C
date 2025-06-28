
#include <stdio.h>
#include <conio.h>
#include <string.h>
void calculateGrade(int rollno, char name[30], int marks);
int main()
{
    int rollno, marks;
    char name[30];
    printf("Enter the RollNo Of Student : ");
    scanf("%d", &rollno);
    printf("Enter the Name of student : ");
    scanf("%s", name);
    printf("Enter the Marks Of Student : ");
    scanf("%d", &marks);
    calculateGrade(rollno, name, marks);
    return 0;
}
void calculateGrade(int rollno, char name[30], int marks)
{
    char grade[10];
    if (marks <= 34)
    {
        strcpy(grade, "Fail");
    }
    else if (marks >= 35 && marks <= 59)
    {
        strcpy(grade, "Second");
    }
    else if (marks >= 60 && marks <= 79)
    {
        strcpy(grade, "First");
    }
    else if (marks >= 80)
    {
        strcpy(grade, "Dist");
    }
    printf("\n\tRollno\tName\tMarks\tGrade");
    printf("\n\t-----------------------------------");
    printf("\n\t%d\t%s\t%d\t%s");
}