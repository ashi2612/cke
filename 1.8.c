//1.8. Write a program to input a number and print corresponding character

#include<stdio.h>
int main(){
	int c;
	printf("Input ASCII value to see its corresponding character : ");
	scanf("%d",&c);
	printf("ASCII value is %d and Character is '%c'",c,c);
	return 1;
}
//Input ASCII value to see its corresponding character : 45
//ASCII value is 45 and Character is '-'
