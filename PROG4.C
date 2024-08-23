#include<stdio.h>
#include<conio.h>
void Area_rect(int l,int b);
void main(){
	int l,b;
	clrscr();
	printf("Enter the length and breadth : ");
	scanf("%d %d",&l,&b);
	Area_rect(l,b);
	getch();
}
void Area_rect(int l,int b){
	printf("\n The Area of Rectangle = %d",l*b);
}
