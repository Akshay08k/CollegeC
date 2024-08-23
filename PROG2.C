#include<stdio.h>
#include<conio.h>
void print(char name[15],char add[30],char dob[10]);
void main(){
	clrscr();
	print("Akshay","Ahmedabad-Gujarat","08-11-2003");
	getch();
}
void print(char name[15],char add[30],char dob[10]){
	printf("\n\tName\tAddress\t\t\tDoB");
	printf("\n\t----------------------------------------------");
	printf("\n\t%s\t%s\t%s",name,add,dob);
}
