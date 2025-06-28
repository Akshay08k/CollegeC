#include<stdio.h>
void print(char text[30]);
int main(){
	print("Hello world!");
	return 0;
}
void print(char text[30]){
	printf("%s",text);
}