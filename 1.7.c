//1.7. Write a program to input a character and its ASCII value.

#include<stdio.h>
int main(){
	char c;
	printf("Input a character to see its ASCII value : ");
	scanf("%c",&c);
	printf("Character is '%c' and ASCII value is %d",c,c);
	return 1;
}

//Input a character to see its ASCII value : A
//Character is 'A' and ASCII value is 65
