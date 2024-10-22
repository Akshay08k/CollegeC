#include <stdio.h>

struct student
{
    char name[20], gender;
    int rollNo, age, m1, m2, m3, total;
    float avg;
};

int main()
{
    struct student stud[10];
    FILE *fp;
    fp = fopen("stud.csv", "w");
    if (fp == NULL)
    {
        printf("Error");
    }
    int i, n;
    printf("Enter Number Of Student : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Name : ");
        scanf("%s", stud[i].name);
        printf("Enter Gender : ");
        scanf("%s", &stud[i].gender);
        printf("Enter Roll No. : ");
        scanf("%d", &stud[i].rollNo);
        printf("Enter Age : ");
        scanf("%d", &stud[i].age);
        printf("Enter Marks in 3 Subjects : ");
        scanf("%d %d %d", &stud[i].m1, &stud[i].m2, &stud[i].m3);
        stud[i].total = stud[i].m1 + stud[i].m2 + stud[i].m3;
        stud[i].avg = (float)stud[i].total / 3.0;
    }
    printf("\nName\tGender\tRoll No\tAge\tTotal\tAverage\n");
    fprintf(fp, "Name,Gender,M1,M2,M3,Roll No,Age,Total,Average\n");

    printf("\n------------------------------------------------\n");
    for (i = 0; i < n; i++)
    {
        fprintf(fp, "%s,%c,%d,%d,%d,%d,%d,%d,%.2f\n", stud[i].name, stud[i].gender, stud[i].m1, stud[i].m2, stud[i].m3, stud[i].rollNo, stud[i].age, stud[i].total, stud[i].avg);
        printf("%s\t%c\t%d\t%d\t%d\t%.2f\n", stud[i].name, stud[i].gender, stud[i].rollNo, stud[i].age, stud[i].total, stud[i].avg);
    }
    fclose(fp);
    return 0;
}