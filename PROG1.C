#include<stdio.h>
#include<conio.h>
void print(char text[30]);
void main(){
	clrscr();
	print("Hello world!");
	getch();
}
void print(char text[30]){
	printf("%s",text);
}