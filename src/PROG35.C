// Write a program in C for grade calculation using if…else if ladder and switch statement.
// Accept marks of 3 subjects, calculate total and based on it calculate grade.
// Total greater or equal to than 80 Grade A+
// Total greater or equal to than 70 and less than 80 Grade A
// Total greater or equal to than 60 and less than 70 Grade A–
// Total greater or equal to than 50 and less than 60 Grade B+

#include <stdio.h>
#include <conio.h>
#include <string.h>
void calcGrade(int m1, int m2, int m3);
int main()
{
    int m1, m2, m3, rollno;
    char name[10];
    printf("Enter the Roll NO : ");
    scanf("%d", &rollno);
    printf("Enter the name of student : ");
    scanf("%s", name);
    printf("Enter the marks of 3 Subjects : ");
    scanf("%d %d %d", &m1, &m2, &m3);
    calcGrade(m1, m2, m3);
    return 0;
}
void calcGrade(int rollno, char name[10], int m1, int m2, int m3)
{
    int total = m1 + m2 + m3;
    char grade[5];
    float average = total / 3;
    if (average >= 80)
    {
        strcpy(grade, "A+");
    }
    else if (average >= 70 && average <= 79)
    {
        strcpy(grade, "A");
    }
    else if (average >= 60 && average <= 69)
    {
        strcpy(grade, "A-");
    }
    else if (average >= 50 && average <= 59)
    {
        strcpy(grade, "B+");
    }
    printf("\n\tName\tRollno\tTotal\tGrade");
    printf("\n\t----------------------------------");
    printf("\n\t%s\t%d\t%d\t%c");
}
